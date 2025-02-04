// class Solution {
// public:
//method 1
    // int removeDuplicates(vector<int>& nums) {
    //     int count=1,n=nums.size();
    //     if(n==1){return 1;}
    //     vector<int>p;
    //     int k=nums[0];
    //     p.push_back(nums[0]);
    //     for(int i=1;i<n;i++){
    //         if(nums[i]!=k){
    //             count++;
    //             p.push_back(nums[i]);
    //             k=nums[i];
    //         }
    //     }
    //     for(int i=0;i<count;i++){
    //         nums[i]=p[i];
    //     }
    //     return count;
    // }
// };

//method 2 brute force using set data structure
// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//     set<int> s;
//     int n=nums.size();
//     for(int i=0;i<n;i++){
//         s.insert(nums[i]);
//     }
//     int index=0,k=s.size();
//     for(auto it=s.begin();it!=s.end();++it){
//         nums[index++]=*it;
//     }
//     return k;
//     }
// };

//optimal approach two pointer
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int i=0,j=0,n=nums.size();
    if(n==1){return 1;}
    for(int j=1;j<n;j++){
        if(nums[i]!=nums[j]){
            i++;
            nums[i]=nums[j];
        }
    }
    return i+1;
    }
};