#include<algorithm>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // method 1:brute force
    //     int n=nums.size(),c=0;
    //     vector<int>a;
    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<n;j++){
    //             if(i==j){continue;}
    //             else if(nums[i]+nums[j]==target){
    //                 a.push_back(i);
    //                 a.push_back(j);
    //                 c=1;
    //                 break;
    //             }
    //         }
    //         if(c==1){break;}
    //     }
    //     return a;
    // }
    // //optimised brute force
        // int n=nums.size(),c=0;
        // vector<int>a;
        // for(int i=0;i<n;i++){
        //     for(int j=i;j<n;j++){//here lies the change
        //         if(i==j){continue;}//this line aint needed now
        //         else if(nums[i]+nums[j]==target){
        //             a.push_back(i);
        //             a.push_back(j);
        //             c=1;
        //             break;
        //         }
        //     }
        //     if(c==1){break;}
        // }
        // return a;



        //better approach:using maps
        // vector<int> ans;
        // unordered_map<int ,int> a;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     a[nums[i]]=i;
        // }
        // for(int i=0;i<n;i++){
        //     int k=target-nums[i];
        //     if(a[k]!=i)
        //     {  
        //         ans.push_back(a[k]);
        //         ans.push_back(i);
        //         return ans;
        //     }
        // }
        // return ans;




        // optimised better
       // vector<int> ans;
        // unordered_map<int ,int> a;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     int k=target-nums[i];
        //     if(a.find(k)!=a.end()){
        //         ans.push_back(a[k]);
        //         ans.push_back(i);
        //         return ans;
        //     }
        //     a[nums[i]]=i;
        // }
        // return ans;

        
        //optimised:if and only if we gotta return whether such indexes are even possibble or not;
    //     sort(nums.begin(),nums.end());
    //     int i=0,j=nums.size()-1;
    //     vector<int> ans;
    //     while(i<j){
    //         if(nums[i]+nums[j]<target){
    //             i++;
    //         }
    //         else if(nums[i]+nums[j]>target){
    //             j--;
    //         }
    //         else{
    //             ans.push_back(i);
    //             ans.push_back(j);
    //             break;
    //         }
    //     }
    //     return ans;
    }
};