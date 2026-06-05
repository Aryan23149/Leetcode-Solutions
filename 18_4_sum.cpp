class Solution {
    public:
        vector<vector<int>> fourSum(vector<int>& nums, int target) {
            // extreme brute force approach
            // time complexity is O(N*N*N*N*logM)
            // where M is cost associated with set insertion and M<=O(N*N*N*N)...Log N^4= 4LogN
            // total time complexity is O(N^4LogN)
            // space complexity is O(N^4)
            int n= nums.size();
            set<vector<int>> answers;
            long long int t=target;
            for(int i=0 ;i<n-3;i++){
                // if(i>0 && nums[i]==nums[i-1]){
                //     continue;
                // }
                for(int j=i+1;j<n-2;j++){
                    // if(j>1 && nums[j]==nums[j-1]){
                    //     continue;
                    // }
                    for(int k=j+1;k<n-1;k++){
                        // if(k>2 && nums[k]==nums[k-1]){
                        //     continue;
                        // }
                        for(int l=k+1;l<n;l++){
                            // if(l>3 && nums[l]==nums[l-1]){
                            //     continue;
                            // }
                            long long sum =(long long)nums[i]+ nums[j]+ nums[k] + nums[l];
                            if(sum==t){
                                vector<int> arr;
                                arr.push_back(nums[i]);
                                arr.push_back(nums[j]);
                                arr.push_back(nums[k]);
                                arr.push_back(nums[l]);
                                sort(arr.begin(),arr.end());
                                answers.insert(arr);
                            }
                        }
                    }
                }
            }
            vector<vector<int>> final_answers;
            for(vector<int> a : answers){
                final_answers.push_back(a);
            }
            return final_answers;
        }
    };