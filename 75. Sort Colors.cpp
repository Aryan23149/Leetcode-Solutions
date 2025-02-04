#include<bits/stdc++.h>
class Solution {
public:
    void sortColors(vector<int>& nums) {
        //method 1:sorting
        sort(nums.begin(),nums.end());
        //better approach
        // int one=0,two=0,zero=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==0){zero++;}
        //     else if(nums[i]==1){one++;}
        //     else(nums[i]==2){two++;}
        // }
        // for(int i=0;i<zero;i++){
        //     nums[i]=0;
        // }
        // for(int i=zero;i<zero+one;i++){
        //     nums[i]=1;
        // }
        // for(int i=zero+one;i<zero+one+two;i++){
        //     nums[i]=2;
        // }
        // return;


        //optimal approach:dutch national flag algorithm
        int low=0,mid=0,high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low++],nums[mid++]);
            }
            else if(nums[mid]==2){
                swap(nums[mid],nums[high]);
                high--;
            }
            else{
                mid++;
            }
        }
        return;
    }
};