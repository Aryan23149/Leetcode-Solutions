class Solution {
public:
    void convertsetvectorintovectorvector(set<vector<int>> &ans,vector<vector<int>> &space){
        for(auto it: ans){
            space.push_back(it);
        }
        return;
    }
    void findcombi(set<vector<int>> &ans,int index,int target,vector<int> &ds,vector<int> & candidates){
        if(target==0){
            ans.insert(ds);
            return;
        }
        if(index>=candidates.size()|| target<0){
            return;
        }
        ds.push_back(candidates[index]);
        findcombi(ans,index+1,target-candidates[index],ds,candidates);
        ds.pop_back();
        findcombi(ans,index+1,target,ds,candidates);
        return;
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        //METHOD ONE : BRUTE FORCE, TIME COMPLEXITY:- O(nlogn+2^n+2^n vectors of each size k)=O(nlogn+2^n(k+1))=O(2^n*k+nlogn)
        //space complexity of this code: O(n) for candidates+O(n) for temporary ds+O(2^n) for  set of vectors +O(2^n) for vectors
        //of vectors +O(n) for recursion stack space as max depth of tree is n
        //thus overall space complexity is O(3n+2^n+1)=O(2^n)
        
        sort(candidates.begin(),candidates.end());// so that subseq are automatically generated in sorted order

        set<vector<int>> ans;//for storing our answer
        vector<int> ds;//for storing temporary array

        findcombi(ans,0,target,ds,candidates);//it does the job

        vector<vector<int>> space;//ds to return the answer
        convertsetvectorintovectorvector(ans,space);//converts set vector into vector vector 
        
        //sort(space.begin(),space.end());//sort them in lexographic order...since candidates got sorted already,new subseqs will 
        //also be in sorted oreder and hence no need of this statement;
        return space;
    }
};