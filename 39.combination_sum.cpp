class Solution {
public:
    void combi(int index,vector<int> & candidates,int target,vector<vector<int>>& subseq,vector<int>& temp_arr){
        if(index>=candidates.size()|| 0>target){
            return;
        }
        if(0==target){
            subseq.push_back(temp_arr);
            return;
        }

        temp_arr.push_back(candidates[index]);
        combi(index,candidates,target-candidates[index],subseq,temp_arr);
    

        temp_arr.pop_back();
        combi(index+1,candidates,target,subseq,temp_arr);

        return;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> subseq;
        vector<int> temp_arr;
        combi(0,candidates,target,subseq,temp_arr);
        return subseq;
    }
};