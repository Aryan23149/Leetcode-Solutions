class Solution {
    public:
        int threeSumClosest(vector<int>& nums, int target) {
            // int n=nums.size();
            // int diff=INT_MAX;
            // int sum_of_triplet;
            // for(int i=0;i<n-2;i++){
            //     int first_element=nums[i];
            //     for(int j=i+1;j<n-1;j++){
            //         int second_element=nums[j];
            //         for(int k=j+1;k<n;k++){
            //             int third_element=nums[k];
            //             int sum=first_element + second_element + third_element;
            //             int distance_from_target=abs(sum-target);
            //             if(distance_from_target<diff){
            //                 diff=distance_from_target;
            //                 sum_of_triplet=sum;
            //             }
            //         }
            //     }
            // }
            // return sum_of_triplet;
            int n=nums.size();
            sort(nums.begin(),nums.end());
            int diff=INT_MAX;
            int answer;
            for(int i=0;i<n;i++){
                int j=i+1;
                int k=n-1;
                while(j<k){
                    int sum=nums[j]+nums[k]+nums[i];
                    if(abs(sum-target)<diff){
                        answer=sum;
                        diff=abs(sum-target);
                    }
                    else{
                        if(sum>target){
                            k--;
                        }
                        else{
                            j++;
                        }
                    }
                }
            }
            return answer;
        }
    };