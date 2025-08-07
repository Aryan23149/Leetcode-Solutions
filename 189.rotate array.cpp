class Solution {
public:
    void swap(int* i ,int* j){
        int c=*i;
        *i=*j;
        *j=c;
        return;
    }
    void reverse(vector<int>& arr,int low,int high){
        while(low<=high){
            swap(&arr[low++],&arr[high--]);
            
        }
    }
    void rotate(vector<int>& arr, int d) {
        //method 1: using extra array and doing d times
        // int n=arr.size();
        // d=d%n;
        // for(int j=1;j<=d;j++){
        //     int arr2[n];
        //     arr2[0]=arr[n-1];
        //     for(int i=1;i<n;i++){
        //         arr2[i]=arr[i-1];
        //     }
        //     for(int i=0;i<n;i++){
        //         arr[i]=arr2[i];
        //     }
        // }
        //return
        //method 2 using shifting d times
    //     int n=arr.size();
    //     d=d%n;
    //     for(int j=1;j<=d;j++){
    //         int temp=arr[n-1];
    //         for(int i=n-1;i>=1;i--){
    //             arr[i]=arr[i-1];
    //         }
    //         arr[0]=temp;
    //     }
    //     return;
    // }
    //method 3
    //     int n=arr.size(),arr2[n];
    //     d=d%n;
    //     for(int i=0;i<=n-1-d;i++){
    //         arr2[i+d]=arr[i];
    //     }
    //     for(int i=n-d;i<n;i++){
    //         arr2[i-n+d]=arr[i];
    //     }
    //     for(int i=0;i<n;i++){
    //         arr[i]=arr2[i];
    //     }
    //     return;
    // }
        //method 4 decreased space time complexity
    //     int n=arr.size();
    //     d=d%n;
    //     int b[d];
    //     for(int i=n-d;i<=n-1;i++){
    //         b[i-n+d]=arr[i];
    //     }
    //     for(int i=0;i<=n-d-1;i++){
    //         arr[d+i]=arr[i];
    //     }
    //     for(int i=0;i<=d-1;i++){
    //         arr[i]=b[i];
    //     }
    //     return;
    
    // }
        //method 5
        int n=arr.size();
        d=d%n;
        if(d!=0){
            reverse(arr,0,n-d-1);
            reverse(arr,n-d,n-1);
            reverse(arr,0,n-1);
        }
        return;

    }
};