class Solution {
public:
    void modifications(vector<string> &ans,string abc,int balance,int target){
    if(balance<0){
        return;
    }
    if(0>=target){
        if(balance==0){ans.push_back(abc);}
        return;
    }
    modifications(ans,abc+"(",balance+1,target-1);
    modifications(ans,abc+")",balance-1,target-1);
    return;
}
    vector<string> generateParenthesis(int n) {
        vector<string> answer;
        modifications(answer,"",0,n*2);
        return answer;
    }
};