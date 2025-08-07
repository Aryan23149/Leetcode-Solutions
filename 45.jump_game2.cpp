class Solution {
    public:
        int func(vector<int> & nums,int n,int index,int mini_jumps,int jumps){
            //method 1 using recursive algorithm
            if(index>=n-1){
                return min(mini_jumps,jumps);
            }
            else if(nums[index]==0){return INT_MAX;}
            for(int i=index+1;i<=index+nums[index];i++){
                int x=func(nums,n,i,mini_jumps,jumps+1);
                if(x<mini_jumps){
                    mini_jumps=x;
                }
            }
            return mini_jumps;
        }
        int jump(vector<int>& nums) {
            return func(nums,nums.size(),0,INT_MAX,0);//recursive algorithm
            //method 3 using greedy algorithms
        //     int r=0,l=0,n=nums.size(),jumps=0,farthest=0;
        //     if(n==1){
        //         return 0;
        //     }
        //     while(r<n){
        //         //int farthest=0;
        //         for(int i=l;i<=r;i++){
        //             farthest=max(farthest,i+nums[i]);
        //             if(farthest>=n-1){
        //                 return jumps+1;
        //             }
        //         }
        //         l=r+1;
        //         r=farthest;
        //         jumps++;
        //     }
        //     return jumps;
        }
    };