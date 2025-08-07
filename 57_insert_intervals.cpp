class Solution {
    public:
        vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
            vector<vector<int>> answer;//for storing our answer
            int n=intervals.size();//size of given interval array
            int i=0;//starting with o indes
            while(i<n&&intervals[i][1]<newInterval[0]){//adding all such intervals into the answer that dont overlapp with given one
                answer.push_back({intervals[i][0],intervals[i][1]});
                i++;
            }
            int mini=newInterval[0];//lowerlimit for overlapped intervals
            int maxi=newInterval[1];//upperlimit for overlapped intervals
            while(i<n&&intervals[i][0]<=newInterval[1]){//iterating till end of array and till intervals overlapp
                mini=min(mini,intervals[i][0]);//upadating lower limit
                maxi=max(maxi,intervals[i][1]);//updating upper limit
                i++;//incrementint i
            }
            answer.push_back({mini,maxi});//adding that one single of interval made after merging all overlapped ones
            while(i<n){//ending rest of the intervals as it is
                answer.push_back({intervals[i][0],intervals[i][1]});
                i++;
            }
            return answer;//giving back the function its answer;
        }
    };