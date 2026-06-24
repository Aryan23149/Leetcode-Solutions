class Solution {
    public:
        int subarraysDivByK(vector<int>& nums, int k) {
            // brute force approach
            // time complexity is O(N^3)
            // space complexity is O(1)
            // int n= nums.size();
            // int count=0;
            // for(int i=0;i<n;i++){
            //     for(int j=i;j<n;j++){
            //         int sum=0;
            //         for(int k=i;k<=j;k++) sum+= nums[k];
            //         if(sum % k==0 ) count++;
            //     }
            // }
            // return count;
    
            // approach 2 : Using variables to store sum say some space
            // time complexity : O(N^2)
            // space complexity: O(1)
            // int n = nums.size();
            // int total=0;
            // for(int i=0;i<n;i++){
            //     int sum=0;
            //     for(int j=i;j<n;j++){
            //         sum+=nums[j];
            //         if(sum%k==0) total++;
            //     }
            // }
            // return total;
    
            // appraoch 3: using hashmaps prolly the most optimized way
            // time complexity is O(N)
            // space complexity is O(N)
            int n =  nums.size();// number of elements in the array
            unordered_map<int,int> f;// for caching prefix remainders
            f[0]=1;// an empty array has sum divisible by k
            int total=0;// it shall store number of subarrays whose sum is divisible by k
            int sum=0;// it shall store prefix_sum of nums array
            for(int i=0;i<n;i++){// traverse arraay
                sum+=nums[i];// update prefix_sum
                int freq=(sum%k);// find remainder 
                if(freq<0){
                    freq=k+freq;// c++ -1 % 5=-1 and not 4 so change it
                }
                total+=f[freq];// find no of prev_occurance of this sum subarray ....increase total by its prev_occurance why? say previous occurances of sum where on indices (a1,a2..am)...now there exists subarrays from [(a2,a3...al),(a3,a4,...,al),...,(am,am+1,am+2,.....,al)]...and thus the required operation
                f[freq]++;// incrementing its occurance.
            }
            return total;
            // 4 5 0 -2 -3 1 : arr
            // 4 9 0  7  4 5 : prefix_sum_arr
            // 4 4 0  2  4 0 : 
            // 4 0 0  3  2 1  :
            //                            map 0->1
            // i= 0 , sum = 4 , total = 0, map 4->1
            // i= 1  , sum = 9 , total= 1 , map 4->2 
            // i = 2 , sum = 9 , total = 3 , map 4->3
            // i = 3, sum = 7 , total = 3 , map 2-> 1
            // i= 4 , sum = 4 , total = 6 , map  4-> 4
            // i = 5 , sum  = 5 , total = 7, map 0 -> 2
    
            //                              map 0->1
            // i= 0 , sum = -1 , total = 0, map 1->1
            // i= 1  , sum = 1 , total= 1 , map 1->2 
            // i = 2 , sum = 10 , total = 2,map 0->2
    
        }
    };