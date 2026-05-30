class Solution {
    public:
        vector<int> twoSum(vector<int>& numbers, int target) {
            //brute force approach
            // vector<int> indices;
            // int n=numbers.size();
            // for(int i=0;i<n;i++){
            //     int n=numbers.size();
            //     for(int j=i+1;j<n;j++){
            //         if(numbers[i]+numbers[j]==target){
            //             indices.push_back(i+1);
            //             indices.push_back(j+1);
            //             return indices;
            //         }
            //     }
            // }
            // return indices;
            int i=0;
            int n=numbers.size();
            int j=n-1;
            while(i<j){
                int sum=numbers[i]+numbers[j];
                if(sum>target){
                    j--;
                }
                else if(sum< target){
                    i++;
                }
                else{
                    return {i+1,j+1};
                }
            }
            return {-1,-1};
        }
    };