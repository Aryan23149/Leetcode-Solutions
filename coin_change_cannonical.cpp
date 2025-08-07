// Given a value V, if we want to make a change for V Rs, and we have an infinite 
// supply of each of the denominations in Indian currency, i.e.,we have 
// an infinite supply of { 1, 2, 5, 10, 20, 50, 100, 500, 1000} valued coins/notes, what is 
// the minimum number of coins and/or notes needed to make the change.
#include<iostream>
#include<vector>
using namespace std;
int min_coin_change_cannonical(vector<int>& currencies,int amount){
    int x=currencies.size()-1;
    int no_of_coins=0;
    if(amount==0){return 0;}
    while(amount>0&&x>=0){
        if(currencies[x]<=amount){
            int count=amount/currencies[x];
            amount=amount-currencies[x]*count;
            no_of_coins+=count;
        }
        else{
            x--;
        }
    }
    if(amount!=0){
        no_of_coins=-1;
    }
    return no_of_coins;
}
int main(){
    vector<int> currencies={ 1, 2, 5, 10, 20, 50, 100, 500, 1000};
    int amount;
    cin>>amount;
    cout<<min_coin_change_cannonical(currencies,amount);
}