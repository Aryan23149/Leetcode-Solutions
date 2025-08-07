class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //method 1 brute force
        // vector<int>a;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]!=0){
        //         a.push_back(nums[i]);
        //     }
        // }
        // for(int i=0;i<a.size();i++){
        //     nums[i]=a[i];
        // }
        // if(nums.size()==a.size()){return;}
        // for(int i=a.size();i<nums.size();i++){
        //     nums[i]=0;
        // }
        // return;
        //method 2 optimal
        int i=0,n=nums.size();
        if(n==1){return;}
        while(i<n&&nums[i]!=0){
            i++;
        }//i will give first occurance of zero
        if(i>=n-1){return ;}
        for(int j=i+1;j<n;j++){
            if(nums[j]==0){continue;}
            else{
                int temp=nums[j];
                nums[j]=nums[i];
                nums[i]=temp;
                i++;
            }
        }
        return;
    }
};