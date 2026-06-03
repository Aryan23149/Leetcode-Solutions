class Solution {
    public:
    
        int numSubarrayProductLessThanK(vector<int>& nums, int k) {
            // first thought approach aka brute force one
                // its time complexity is O(N*N)
                // its space complexity is O(1)
                // int n=nums.size();
                // int count=0;
                // for(int i=0;i<n;i++){
                //     int product=1;
            //     for(int j=i;j<n;j++){
            //         product=product*nums[j];
            //         if(product<k){
            //             count++;
            //         }
            //         else break;
            //     }
            // }
            // return count;
            // better approach using two pointers
            int i=0,j=0;
            int n=nums.size();
            int product=1;
            int count=0;
            while(j<n){
                product=product*nums[j];
                if(product<k){
                    count++;
                    j++;
                }
                else{
                    product=product/nums[i];
                    i++;
                }
            }
            count= count + (j);
            return count;
        }
    };