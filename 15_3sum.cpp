class Solution {
    public:
        vector<vector<int>> threeSum(vector<int>& nums) {
            // brute force approach
            // time complexity is O(N*N*N*LogN)
            // there shall be at max nC3 triplets which is roughly O(N cube) and insertion once takes Logarithmic  time...so total log N cube which give O(N^3LogN)
            // space complexity is O(N cube)
            // int n =nums.size();
            // int count=0;
            // set<vector<int>> answer;
            // for(int i=0;i<n;i++){
            //     // vector<int> arr;
            //     int first_element=nums[i];
            //     for(int j=i+1;j<n;j++){
            //         int second_element=nums[j];
            //         for(int k=j+1;k<n;k++){
            //             int third_element=nums[k];
            //             if(first_element+second_element+third_element==0){
            //                 vector<int> arr;
            //                 arr.push_back(first_element);
            //                 arr.push_back(second_element);
            //                 arr.push_back(third_element);
            //                 sort(arr.begin(),arr.end());// key step in brute force
            //                 answer.insert(arr);
            //             }
            //         }
            //     }
            // }
            // vector<vector<int>> sol;
            // for(vector<int> a: answer){
            //     vector<int> ans;
            //     for(int b: a){
            //         ans.push_back(b);
            //     }
            //     sol.push_back(ans);
            // }
            // return sol;
    
            // optimal better approach
            sort(nums.begin(),nums.end());// O(NlogN)
            vector<vector<int>> answers;// for storing answers
            int n=nums.size();
            for(int i=0;i<n-2;i++){//think why i<n-2 and not i<n
                if(i>0 && nums[i]==nums[i-1]){// skipping duplicates for i values
                    continue;
                }
                int target= -1*nums[i];// fixing nums[i] would make us two pointer target=-nums[i]
                int j=i+1;//thought why j=i+1
                int l=n-1;
                while(j<l){
                    int sum=nums[j]+nums[l];// sum of other two elements
                    if(sum>target){
                        l--;
                    }
                    else if(sum<target){
                        j++;
                    }
                    else{
                        vector<int> arr;// if we get the intended target
                        arr.push_back(nums[i]);
                        arr.push_back(nums[j]);
                        arr.push_back(nums[l]);// add only in this order think why
                        answers.push_back(arr);
                        j++;
                        l--;
                        while(j < l && nums[j] == nums[j - 1]) {
                            j++;
                        }// skip duplicate  values of j think why we did not used sets
                        // and still managed to get uniqueness
    
                        // Skip duplicate right values
                        while(j < l && nums[l] == nums[l + 1]) {
                            l--;
                        }
                    }
                }
            }
            return answers;
        }
    };