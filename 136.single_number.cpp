class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> a;
        int x;
        for(int i=0;i<nums.size();i++){
            a[nums[i]]++;
        }
    //Find the single element and return the answer:
        for (auto it : a) {
            if (it.second == 1)
                return it.first;
        }
        // for(int i=0;i<nums.size();i++){
        //     if(a[nums[i]]==1){
        //         x=nums[i];
        //         break;
        //     }
        // }
        return -1;

        //method 2
    int singleNumber(vector<int>& nums) {
        int xor=0;
        for(int i=0;i<nums.size();i++){
            xor=xor^nums[i];
        }
        return xor;}
    }
};
