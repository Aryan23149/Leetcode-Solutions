class Solution {
public:
    //method 1: brute force approach
    // int mini(vector<int> a,int j){
    //     int x=INT_MAX;
    //     for(int i=j-1;i>=0;i--){
    //         if(a[i]<x){x=a[i];}
    //     }
    //     return x;
    // }
    // int maxProfit(vector<int>& prices) {
    //     int profit=0,n=prices.size();
    //     for(int i=n-1;i>0;i--){
    //         int min=mini(prices,i);
    //         if(prices[i]-min>profit){
    //             profit=prices[i]-min;
    //         }
    //     }
    //     return profit;
    // }


    //method 2: dp remembering the past of mini using an array
    int maxProfit(vector<int>& prices) {
        int profit=0,n=prices.size(),mini[n];
        mini[0]=prices[0];
        for(int i=1;i<n;i++){
            if(mini[i-1]>prices[i]){
                mini[i]=prices[i];
            }
            else{
                mini[i]=mini[i-1];
            }
            if(profit<prices[i]-mini[i]){
                profit=prices[i]-mini[i];
            }
        }
        return profit;
    }

    //method 3: dp remembering the past of mini
    // int maxProfit(vector<int>& prices) {
    //     int profit=0,n=prices.size();
    //     int min=prices[0];
    //     // int min_arr[n];
    //     // min_arr[0]=prices[0];
    //     for(int i=1;i<n;i++){
    //         if(min>prices[i]){
    //             min=prices[i];
    //         }
    //         if(profit<prices[i]-min){
    //             profit=prices[i]-min;
    //         }
    //     }
    //     return profit;
    // }

};class Solution {
public:
    //method 1: brute force approach
    // int mini(vector<int> a,int j){
    //     int x=INT_MAX;
    //     for(int i=j-1;i>=0;i--){
    //         if(a[i]<x){x=a[i];}
    //     }
    //     return x;
    // }
    // int maxProfit(vector<int>& prices) {
    //     int profit=0,n=prices.size();
    //     for(int i=n-1;i>0;i--){
    //         int min=mini(prices,i);
    //         if(prices[i]-min>profit){
    //             profit=prices[i]-min;
    //         }
    //     }
    //     return profit;
    // }


    //method 2: dp remembering the past of mini using an array
    int maxProfit(vector<int>& prices) {
        int profit=0,n=prices.size(),mini[n];
        mini[0]=prices[0];
        for(int i=1;i<n;i++){
            if(mini[i-1]>prices[i]){
                mini[i]=prices[i];
            }
            else{
                mini[i]=mini[i-1];
            }
            if(profit<prices[i]-mini[i]){
                profit=prices[i]-mini[i];
            }
        }
        return profit;
    }

    //method 3: dp remembering the past of mini
    // int maxProfit(vector<int>& prices) {
    //     int profit=0,n=prices.size();
    //     int min=prices[0];
    //     // int min_arr[n];
    //     // min_arr[0]=prices[0];
    //     for(int i=1;i<n;i++){
    //         if(min>prices[i]){
    //             min=prices[i];
    //         }
    //         if(profit<prices[i]-min){
    //             profit=prices[i]-min;
    //         }
    //     }
    //     return profit;
    // }

};