class Solution {
public:
    bool isPalindrome(int x) {
        if(x<=0){
            if(x==0){return true;}
            return false;
        }
        int n,y=x,l=0,count=0;
        while(y>=0&&count<(int)(log10(x)+1)){
            n=(int)(y%10);
            count++;
            l=l*10+n;
            // cout<<l<<endl;
            y/=10;
        }
        if(x==l){
            return true;
        }
        return false;    
    }
};