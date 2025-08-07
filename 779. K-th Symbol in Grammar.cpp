class Solution {
    public:
        int kthGrammar(int n, int k) {
            if(n==1||k==1){
                return 0;
            }//base_Condition of code as given in question
            int x=pow(2,n-1)/2;//we are splitiing nth row in two parts ...length of nth row is 2**N-1
            if(k>x){//if k is beyond first half
                // int y=kthGrammar(n-1,k-x);
                // if(y==0){
                //     return 1;
                // }
                // else{
                //     return 0;
                // }
                return !kthGrammar(n-1,k-x);// return complement of k-x th symbol
            }
            else{//if k is within first half 
                return kthGrammar(n-1,k);//return kth symbol of the n-1 th row
            }
        }
    };