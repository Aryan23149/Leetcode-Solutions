class Solution {
public:
    int search(vector<int>& a, int target) {
        int low=0,high=a.size()-1,mid;
        while(low<=high){
            mid=(low+high)/2;
            if(a[mid]>target){
                high=mid-1;

            }
            else if(a[mid]<target){
                low=mid+1;
            }
            else{
                return mid;
            }


        }
        return -1;
    }
};