// class Solution {
// public:
//method 1
    //Time Complexity is O(2N) and Space Complexity is O(N)
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
//Time Complexity: O(N+NlogN) Space Complexity : O(N)
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
//Time Complexity is O(N) and Space Complexity is O(1)
class Solution {
    public:
        void swap(int i ,int j ,vector<int> & arr){
            int temp = arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
        int removeDuplicates(vector<int>& nums) {
            int n =nums.size();
            int i=1;
            int j=1;
            int unique_element=nums[0];
            int count =1;
            while(j<n){
                int element=nums[j];
                if(element>unique_element){
                    swap(i++,j,nums);
                    count++;
                    unique_element=element;
                }
                j++;
            }
            return count;
        }
    };