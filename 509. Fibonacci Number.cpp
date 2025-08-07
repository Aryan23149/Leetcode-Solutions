class Solution {
public:
    int fib(int n) {
        //method 2: iterative 
        if(n==0||n==1){
            return n;
        }
        int a=0,b=1,c=0,x=0;
        while(x<n-1){
            c=a+b;
            a=b;
            b=c;
            x++;
        }
        return c;
        //method 1: casual
        // if(n==0){
        //     return 0;
        // }
        // else if(n==1){
        //     return 1;
        // }
        // return fib(n-2)+fib(n-1);
    }
};