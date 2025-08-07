#include<iostream>
#include<vector>
using namespace std;
void display(int a[],int n){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}
//method 1
int find(vector<int>& nums) {
    int count=0,index=0,j=0;
    int *a;
    a=new int[nums.size()];
    while(nums[index]==0){
        index++;
        cout<<index;
    }
    while(index<nums.size()){
        if(nums[index]==0&&nums[index-1]!=0){
            a[j++]=count;
            count=0;
        }
        else if(nums[index]==1){
            count++;
        }
        index++;
    }
    int max=-1;
    for(int i=0;i<nums.size();i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    display(a,nums.size());

    delete[] a;
    if(max==-1){return 0;}
    return max;
}
//method 2
int findMax(vector<int>& nums) {
    int index=0,count=0,max=0;
    while(index<nums.size()){
        while(nums[index]==1&&index<nums.size()){
            count++;
            index++;
        }
        if(count>max){
            max=count;
            count=0;
        }
        index++;
    }
    return max;
}
//method 3
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int index=0,count=0,max=0;
        while(index<nums.size()){
            if(nums[index]==1){
                count++;
            }
            else{
                if(max<count){max=count;}
                count=0;
            }
            index++;
        }
        if(max<count){max=count;}
        return max;
    }
};

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0,n=nums.size(),max=0,count=0;
        while(i<n){
            if(nums[i]==1){
                count++;
            }
            else{
                count=0;
            }
            if(max<count){
                max=count;
            }
            i++;
        }
        return max;
    }
};

int main(){
    vector<int> a={1,1,0,1};
    cout<<findMax(a);
}