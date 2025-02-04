class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        //brute force: method 1
        // vector<int>a;
        // map<int,int>arr;
        // for(int i=0;i<nums1.size();i++){
        //     for(int j=0;j<nums2.size();j++){
        //         if(nums1[i]==nums2[j]&&arr[nums2[j]]==0){
        //             a.push_back(nums2[j]);
        //             arr[nums2[j]]++;
        //         }
        //     }
        // }
        // return a;
        //method 2:only maps
        vector<int> a;
        unordered_map<int,int> b;
        for(int i=0;i<nums1.size();i++){
            if(b[nums1[i]]==0){
                b[nums1[i]]++;
            }
        }
        for(int i=0;i<nums2.size();i++){
            if(b[nums2[i]]==1){
                b[nums2[i]]++;
            }
        }
        for(const auto &i:b){
            if(i.second==2){
                a.push_back(i.first);
            }
        }
        return a;
    }
};