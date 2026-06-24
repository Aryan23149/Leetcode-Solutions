class Solution {
    public:
        long long countSubarrays(vector<int>& nums, long long k) {
            // int n = nums.size();
            // long long int count=0;
            // for(int i=0;i<n;i++){
            //     int sum=0;
            //     for(int j=i;j<n;j++){
            //         sum+=nums[j];
            //         long long int score = 1LL*(j-i+1) * sum;
            //         if(score<k){count++;}
            //     }
            // }
            // return count;
    
            // using sliding window approach
            // TC: O(N) SC: O(1)
            long long int i=0;
            long long int j=0;
            long long int n=nums.size();
            long long int sum=0;
            long long int count =0;
            long long int score=1;
            while(j<n){
                sum+=nums[j];
                long long int length=j-i+1;
                score=length*sum;
                while(i<=j && score>=k){
                    sum-=nums[i];
                    length--;
                    score=sum*length;
                    i++;
                }
                count+=j-i+1;
                j++;
            }
            return count;
        }
    };