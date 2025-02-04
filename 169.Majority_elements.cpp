class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //method 1: brute force:
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     int count=0;
        //     for(int j=0;j<n;j++){
        //         if(nums[i]==nums[j]){
        //             count++;
        //         }
        //     }
        //     if(count>n/2){
        //         return nums[i];
        //     }
        // }
        // return -1;

        //method 2: using maps
        // unordered_map<int,int> b;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     b[nums[i]]++;
        // }
        // for(auto i: b){
        //     if(i.second>n/2){
        //         return i.first;
        //     }
        // }
        // return -1;

        //method 2.0 more optimised better
        // unordered_map<int,int> b;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     b[nums[i]]++;
        //     if(b[nums[i]]>n/2){
        //         return nums[i];
        //     }
        // }
        // return -1;

        //method 3: optimal approach: moore's voting algorithm
        // int element,count=0;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     if(count==0){
        //         element=nums[i];
        //         count=1;
        //     }
        //     else if(nums[i]==element){
        //         count++;
        //     }
        //     else{
        //         count--;
        //     }
        // }
        // count=0;
        // for(int i=0;i<n;i++){
        //     if(nums[i]==element){
        //         count++;;
        //     }
        // }
        // if(count>n/2){
        //     return element;
        // }
        // return -1;
    }
};