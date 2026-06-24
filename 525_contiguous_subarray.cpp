class Solution {
    public:
        pair<int,int> find_count(vector<int> & nums ,int i,int j){
            pair<int,int> answer={0,0};
            for(int k=i;k<=j;k++){
                if(nums[k]==0){
                    answer.first++;
                }
                else answer.second++;
            }
            return answer;
        }
        int findMaxLength(vector<int>& nums) {
            // Brute Force Approach
            // Time Complexity is O(N^3)
            // Space Complexity is O(N)
            // int n=nums.size();
            // int max_length=0;
            // int length=0;
            // for(int i=0;i<n;i++){
            //     for(int j=i;j<n;j++){
            //         pair<int,int> ans=find_count(nums,i,j);
            //         if(ans.first==ans.second){
            //             length=j-i+1;
            //             max_length=max(max_length,length);
            //         }
            //     }
            // }
            // return max_length;
    
            // somewhat better we will do to bring the solution to O(N*N) time wise
            // Time Complexity:O(N*N)
            // Space Complexity:O(1)
            // int n=nums.size();
            // int max_count=0;
            // for(int i=0;i<n;i++){
            //     pair<int,int> p={0,0};
            //     for(int j=i;j<n;j++){
            //         if(nums[j]==0) p.first++;
            //         else p.second++;
            //         if(p.first==p.second){
            //             int count = j-i+1;
            //             max_count=max(max_count,count);
            //         } 
            //     }
            // }
            // return max_count;
            // 0 1 1 1 1 1 0 0 0 : nums array
            // 0 1 2 3 4 5 5 5 5 : prefix_sum_arr
            // 0 1 0 : nums _ arr
            // 0 1 0 : prefix_sum
            int n = nums.size();
            unordered_map<int,int> freq_one;
            // at each index : we number of one 
            int sum=0;
            int zero_count=0;
            int max_count=0;
            for(int i=0;i<n;i++){
                
            }
        }
    };