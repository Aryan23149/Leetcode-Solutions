class Solution {
public:
    void shift(vector<int> &arr,int index,int s_nums1){
        for(int i=s_nums1;i>index;i--){
            arr[i]=arr[i-1];
        }
    }
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i =0,j=0;
        int s_num1=m;
        while(i<s_num1&&j<n){
            if(nums1[i]>nums2[j]){
                shift(nums1,i,s_num1);
                s_num1++;
                nums1[i]=nums2[j];
                i++;
                j++;
            }
            else{
                i++;
            }
        }
        while(j<n){
            nums1[i++]=nums2[j++];
        }
        return;
    }
};