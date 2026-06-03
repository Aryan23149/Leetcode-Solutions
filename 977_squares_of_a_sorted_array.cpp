class Solution {
    public:
        vector<int> sortedSquares(vector<int>& nums) {
    
    
            // Brute Force :
            // time complexity is O(NlogN + N) == O(NlogN)
            //space complexity is O(N)

            // vector<int> answer;
            // for(int i: nums){
            //     answer.push_back(i*i);
            // }
            // sort(answer.begin(),answer.end());
            // return answer;
            
            // using a approach with time complexity O(N)
            // space complexity is O(N)
            //two pointer optimized approach
            
            vector<int> answer;
            int i=0;
            int n=nums.size();
            while(i<n && nums[i]<0){
                i++;
            }
            int j=i-1;
            while(i<n && j>-1){
                int left_squared=nums[j]*nums[j];
                int right_squared=nums[i]*nums[i];
                if(left_squared>=right_squared){
                    answer.push_back(right_squared);
                    i++;
                }
                else{
                    answer.push_back(left_squared);
                    j--;
                }
            }
    
            while(i<n){
                int squared=nums[i]*nums[i];
                i++;
                answer.push_back(squared);
            }
            while(j>=0){
                int squared=nums[j]*nums[j];
                j--;
                answer.push_back(squared);
            }
            return answer;
        }
    };