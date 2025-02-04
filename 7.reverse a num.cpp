#include<vector>
#include<cmath>
#include<string>
#include<cstdlib>
class Solution {
public:
    int reverse(int n) {
    //method 1:brute force
    //     int f=0;
    //     if(n<0){
    //         n=-1*n;
    //         f=1;
    //     }
    //     int y=n,x,count=0;
    //     vector<int> a;
    //     while(y>0){
    //         x=y%10;
    //         a.push_back(x);
    //         y=y/10;
    //         count++;
    //     }
    //     string s("");
    //     for(int i=0;i<count;i++){
    //         s+=to_string(a[i]);
    //     }
    //    if(f==1){return -atoi(s.c_str());}
    //    return atoi(s.c_str());
    // }
    // strivers solution
#include<vector>
#include<cmath>
#include<string>
#include<cstdlib>
class Solution {
public:
    int reverse(int n) {
        int x,y=n,f=0;
        unsigned int l=0,k=pow(2,31)-1;
        if(n>=8463847412){
            return 0;
        }
        if(n<0){
            y=-1*n;
            f=1;
        }
         while(y>0){
             x=y%10;
             y=y/10;
             l=(l*10)+(unsigned int)x;
             if((f==0&&l>k)||(f==1&&l>k+1)){
                return 0;
             }
             }
        if(f==1){
            return (int)(-1*l);}
        return (int)l;
    }
};
};