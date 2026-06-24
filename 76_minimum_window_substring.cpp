class Solution {
    public:
        string minWindow(string s, string t) {
            // brute force
            // time complexity:O(m+n*n*k)==O(n^2*k)
            // space complexity:O(t.size()+s.size())==O(m+n)
            // int n = s.size();
            // int m = t.size();
            // if(n<m) return "";
            // unordered_map<char,int> t_map;
            // for(int i=0;i<m;i++) t_map[t[i]]++;
            // int ans_len=INT_MAX;
            // string answer="";
            // for(int i=0;i<n;i++){
            //     string formed="";
            //     unordered_map<char,int> s_map;
            //     for(int j=i;j<n;j++){
            //         formed+=s[j];
            //         s_map[s[j]]++;
            //         bool fine=true;
            //         for(auto & it : t_map){
            //             if(s_map[it.first]<it.second){
            //                 fine = false;
            //                 break;
            //             }
            //         }
            //         if(fine == true) {
            //             if(j-i+1<ans_len){
            //                 ans_len = min(ans_len,j-i+1);
            //                 answer=formed;
            //             }
            //         }
            //     }
            // }
            // return answer;
    
            // using two pointers and sliding window
            // time complexity: O(m+n)
            // space complexity: O(k)
            int n = s.length();//length of first string
            int m= t.length();// length of second string
            if(n<m) return "";// if s is smaller than t then no answer exists
    
            unordered_map<char,int> need;// it tracks how may characters of string t we got in substrings of s
            int total=m;// it denotes how many characters of t we have found in the string t
            for(char c : t) need[c]++;// for every character in string...we are updating its frequency
    
            int i =0;// these two pointers are the ones that we shall be using to shrink or expand the window
            int j=0;
    
            pair<int,int> p={0,0};// it shall store indcies of minimum window substring
            int min_length=INT_MAX;// it shall carry the length of minimun window substring
    
            while(j<n){// we shall look at all string starting with index j and j covers all letters in j
                char letter=s[j];// we get our letter
                if(need[letter]>0){// it checks if we need this element or not
                    total --;// if yes then decrement total...it updates how many elements we need more
                }
                need[letter]--;// we update frequency of letter t we need further
                j++;// j go ahead go to next letter
                while(total==0){// between index i and index j-1 we have got one of required sub_subtrings....keep on shrinking till we found substrings with total =0
                    if(j-i<min_length){// the substring we got may or may not be smaller than last smallest substring we found we are intrested in only those who are smaller than last substring
                        min_length=j-i;// length of the substring
                        p.first=i;// update indices of smalles substring we found so far
                        p.second=j-1;
                    }
                    need[s[i]]++;//update frequency of elements we need
                    if(need[s[i]]>0){// if i is pointing to a element we need then increment total as we are leaving that element now
                        total ++;// increment total ....as we are leaving an element we need so total shall be incremented as it denotes elements we need  more
                    }
                    i++;// shrink the window
                }
            }
            return min_length == INT_MAX ? "": s.substr(p.first, min_length);// at then end of our algo if we are unable to find such substring then return ""
            // else return substring whose indices we found
        }
    };