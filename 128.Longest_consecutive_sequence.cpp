class Solution {
public:
    bool linear_Search(vector<int> &nums,int k,int n){
        for(int i=0;i<n;i++){
            if(nums[i]==k){
                return true;
            }
        }
        return false;
    }
    int longestConsecutive(vector<int>& nums) {
        //method 1: brute force

        // int max_len=1,n=nums.size(),count,element;
        // if(n==0){
        //     return 0;
        // }
        // for(int i=0;i<n;i++){
        //     count=1,element=nums[i]+1;
        //     while(linear_Search(nums,element,n)==true){
        //         count++;
        //         element++;
        //     }
        //     if(count>max_len){
        //         max_len=count;
        //     }
        // }
        // return max_len;

        //little optimised brute force same method
        

        // int max_len=1,n=nums.size(),count,element;
        // map<int,bool>track;
        // if(n==0){
        //     return 0;
        // }
        // for(int i=0;i<n;i++){
        //     track[nums[i]]=false;
        // }
        // for(int i=0;i<n;i++){
        //     if(track[nums[i]]==true){
        //         continue;
        //     }
        //     count=1,element=nums[i]+1;
        //     while(linear_Search(nums,element,n)==true){
        //         count++;
        //         element++;
        //     }
        //     if(count>max_len){
        //         max_len=count;
        //     }
        //     track[nums[i]]=true;
        // }
        // return max_len;




        // sort(nums.begin(),nums.end());
        // int n=nums.size();
        // int *arr=new int[n];
        // for(int i=0;i<n;i++){

        // }
        //mehtod 2: using sorting algorithms
        // int n=nums.size();
        // if(n==0){
        //     return 0;
        // }
        // int max_len=1,count=1;
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<n-1;i++){
        //     int difference=nums[i+1]-nums[i];
        //     if(difference==1){
        //         count++;
        //     }
        //     else if(difference!=0){
        //         count=1;
        //     }
        //     if(max_len<count){
        //         max_len=count;
        //     }
        // }
        // return max_len;
        //method 3: optimal approach using sets and searching
        if(nums.size()==0){
            return 0;
        }
        unordered_set<int>s1(nums.begin(),nums.end());
        int max_len=1;
        for(const auto &i:s1){
            if(s1.find(i-1)==s1.end()){
                int count=1;
                int element=i+1;
                while(s1.find(element)!=s1.end()){
                    count++;
                    element++;
                }
                if(count>max_len){
                    max_len=count;
                }
            }
            else continue;
        }
        return max_len;
    }
};