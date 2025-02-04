#include<map>
#include<unordered_map>
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //brute force
        // for(int i=1;i<=nums.size();i++){
        //     int flag=0;
        //     for(int j=0;j<nums.size();j++){
        //         if(nums[j]==i){
        //             flag=1;
        //         }
        //     }
        //     if(flag==0){
        //         return i;
        //     }
        // }
        // return 0;

        //better approach
        //1 with maps
        // map<int,int> a;
        //2.unordered maps
        // unordered_map<int,int>a;
        // for(int i=0;i<nums.size();i++){
        //     a[nums[i]]++;

        // }
        // for(int i=1;i<=nums.size();i++){
        //     if(a[i]==0){
        //         return i;
        //     }
        // }
        // return 0;
        //3 hash array
        // int n=nums.size(),a[n+1];
        // for(int i=0;i<=n;i++){
        //     a[i]=0;
        // }
        // for(int i=0;i<n;i++){
        //     a[nums[i]]=1;
        // }
        // for(int i=0;i<n+1;i++){
        //     if(a[i]==0){
        //         return i;
        //     }
        // }
        // return 0;
        //xor method
        // int xor1=1,n=nums.size(),xor2=nums[0];
        // for(int i=2;i<=n;i++){
        //     xor1^=i;
        //     xor2^=nums[i-1];
        // }
        // return xor2^xor1;
        //formula method
        // int sum=0,n=nums.size();
        // for(int i=0;i<n;i++){
        //     sum+=nums[i];
        // }
        // return (((n*(n+1))/2)-sum);

    }
};