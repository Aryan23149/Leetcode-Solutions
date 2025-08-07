class Solution {
    public:
        // bool answer(string s,int i,int n,int balance){
            //approach 1: recursive without dp
        //     if(i==n){//base condition
        //         return balance==0;//true if balance==0
        //     }
        //     if(balance<0){
        //         return false;//at any point if balance is less than zero return false
        //     }
        //     if(s[i]=='('){
        //         balance++;//increment balance
        //         return answer(s,i+1,n,balance);//check for rest of string
        //     }
        //     else if(s[i]==')'){
        //         balance--;//decrement balance
        //         return answer(s,i+1,n,balance);//check for rest of string
        //     }
        //     else{
        //         bool x=answer(s,i+1,n,balance+1);//replace * with (
        //         bool y=answer(s,i+1,n,balance-1);//replace * with )
        //         bool z=answer(s,i+1,n,balance);//replace * with nothing
        //         return x||y||z;  //if any one gives a valid parenthesis return true
        //     }
        // }
        bool checkValidString(string s) {
            // int n=s.length();//to find where to stop in recursion
            // return answer(s,0,n,0);//output will be evaluated by answer function
             //approach 4: greedy algorithms
            int min=0,max=0;//we till track ranges of all the possibilities
            for(int i=0;i<s.length();i++){
                if(s[i]=='('){
                    min++;//incremeneting both upper and lower limits
                    max++;
                }
                else if(s[i]==')'){
                    min--;
                    max--;//decrementing both limits
                }
                else{
                    min--;
                    max++;//if encounter * min will go down as we wil look
                    // for possibilitiy with minimum balance and max will 
                    //go up by one to look for possibility with maximum balance
                }
                if(min<0){
                    min=0;//if at any posibility balance is going -ve choose to replace * with 0
                }
                if(max<0){
                    return false;//if at any possibility balance is -ve return false
                }
            }
            return min==0;//if balance =0 can be included return true else false
        }
    };