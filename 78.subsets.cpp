class Solution {
public:
    void subsequences(int index,vector<int>& subseq,vector<int>&nums,vector<vector<int>>&answer)
    {
        if(index>=nums.size()){
            answer.push_back(subseq);
            return;
        }
        subseq.push_back(nums[index]);
        subsequences(index+1,subseq,nums,answer);
        subseq.pop_back();
        subsequences(index+1,subseq,nums,answer);
        return;

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> answer;
        vector<int> subseq;
        subsequences(0,subseq,nums,answer);
        return answer;
    }
};