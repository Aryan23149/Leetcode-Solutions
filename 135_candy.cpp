class Solution {
    public:
        int candy(vector<int>& ratings) {
            //approach 1: BRUTE FORCE 
            // int n=ratings.size();
            // vector<int> left(n);
            // vector<int> right(n);
            // left[0]=1;
            // right[n-1]=1;
            // for(int i=1;i<n;i++){
            //     if(ratings[i]>ratings[i-1]){
            //         left[i]=left[i-1]+1;
            //     }
            //     else{
            //         left[i]=1;
            //     }
            // }
            // for(int j=n-2;j>=0;j--){
            //     if(ratings[j]>ratings[j+1]){
            //         right[j]=right[j+1]+1;
            //     }
            //     else{
            //         right[j]=1;
            //     }
            // }
            // int sum=0;
            // for(int k=0;k<n;k++){
            //     sum+=max(left[k],right[k]);
            // }
            // return sum;
            //approach 2: better approach using only O(N) auxilary space
            // int n=ratings.size();
            // vector<int> left(n);
            // left[0]=1;
            // for(int i=1;i<n;i++){
            //     if(ratings[i]>ratings[i-1]){
            //         left[i]=left[i-1]+1;
            //     }
            //     else{
            //         left[i]=1;
            //     }
            // }
            // int right=1;
            // int right_most=left[n-1];
            // int sum=0;
            // for(int j=n-2;j>=0;j--){
            //     if(ratings[j]>ratings[j+1]){
            //         right=right+1;
            //     }
            //     else{
            //         right=1;
            //     }
            //     left[j]=max(right,left[j]);
            //     sum+=left[j];
            // }
            // left[n-1]=max(left[n-1],right_most);
            // sum+=left[n-1];
            // return sum;
        }
    };