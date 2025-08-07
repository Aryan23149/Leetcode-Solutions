class Solution {
public:
    int removeElement(vector<int>& a, int val) {
        int i=0,n=a.size(),j=0,count=0;
        while(i<n&&a[i]!=val){
            i++;
        }
        if(i==n){
            return n;
        }
        j=i;
        count=i;
        while(j<n){
            while(j<n&&a[j]==val){
                j++;
            }
            if(j<n){
                swap(a[i++],a[j++]);
                count++;
            }
        }
        return count;
    }
};