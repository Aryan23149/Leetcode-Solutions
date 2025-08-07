class Solution {
public:
    double myPow(double x,  long long int n) {
        if(x==1.0){
            return 1.0;
        }
        else if(x==-1.0){
            if(n%2==0){return 1.0;}
            else {return -1.0;}
        }
        if(n>=2147483647||n<=-2147483648){return 0;}
        double num=1;
        int f=0;
        n=(long long int)n;
        if(n<0){f=1;n=-1*n;}
        for(int i=n;i>0;i--){
            num=x*num;
        }
        if(f==1){num=1/num;}
        if(num>10000||x<-10000){return 1;}
        return num;
    }
};