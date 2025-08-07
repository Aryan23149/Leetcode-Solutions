class Solution {
    public:
        bool canJump(vector<int>& nums) {
            int max_reach=0;//since initially we are at index 0
            n=nums.size();//size of array nums
            for(int i=0;i<n;i++){
                if(i>max_reach){
                    return false;//the maxi that could possibly be reached is less than i..how did
                    // u ended up here..not possible
                }
                max_reach=max(nums[i]+i,max_reach);//at a given index i...how far can u reach
                if(max_reach>n){
                    return true;//we have already reached at the end of array thus end question
                }
            }
            return true;// reaching at the end is possible
        }
    };