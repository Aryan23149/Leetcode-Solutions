class Solution {
    public:
        void swap(int i,int j,vector<int> & arr){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        int removeDuplicates(vector<int>& nums) {
            int n=nums.size();
            int i=0;
            int j=0;
            int current_element_count=1;
            int current_element=nums[j];
            int count=0;
            while(j<n){
                int element=nums[j];
                if(current_element_count<=1){
                    count++;
                    current_element_count++;
                    swap(i,j,nums);
                    i++;j++;
                }
                else{
                    current_element_count++;
                    j++;
                }
                if(element!=current_element){
                    current_element=nums[j];
                    current_element_count=1;
                    swap(i,j,nums);
                    i++;
                    j++;
                    count++;
                }
            }
            return count;
        }
    };