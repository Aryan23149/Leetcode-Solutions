class Solution {
    public:
        int eraseOverlapIntervals(vector<vector<int>>& intervals) {
            int n=intervals.size();//size of array of intervals
            sort(intervals.begin(),intervals.end(),[](const vector<int>&a ,const vector<int>&b) 
            {return a[1]<b[1];
            });//sorting on the basis of ascending order
            int non_removals=1;//atleast one interval will be there such that no intervals overlap let that be first interval 
            //after sorting
            int traversed=intervals[0][1];//how much of interval we have traversed without overlap...for first element it is 
            //end_time of that interval
            int i=1;//we gotta traverse rest of the elements starting from index 1
            while(i<n){//till we traverrse the whole array
                if(intervals[i][0]>=traversed){
                    non_removals++;//adding one such interval that shall not be removed
                    traversed=intervals[i][1];//upadating traversed as per end_time of currently traversed interval
                }
                i++;//loop varibale
            }
            return n-non_removals;//removals=total_elements-n0n_remvals
        }
    };