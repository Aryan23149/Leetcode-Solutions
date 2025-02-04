class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int ecount=0,n=nums.size();
        unordered_map<int,int> b;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                b[nums[i]]++;
                ecount++;
            }
        }
        if(ecount==0) return -1;
        int max=INT_MIN;
        int element INT_MIN;
        ecount=0;
        for(auto i:b){
            ecount++;
            if(i.second>max){
                max=i.second;
                element=i.first;
            }
            else if(ecount>1&&i.second==max&&i.first<element){
                max=i.second;
                element=i.first;
            }
        }
        return max;
    }
};