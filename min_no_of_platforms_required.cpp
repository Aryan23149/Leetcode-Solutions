class Solution{
    public:
    int findPlatform(vector<int>& Arrival, vector<int>& Departure){
        // Approach 1: Sorting with Two Pointers (Efficient & Greedy)
        // Time: O(N log N)
        // Space: O(1) (ignoring sorting space)
        sort(Arrival.begin(),Arrival.end());//sorting arrival array
        sort(Departure.begin(),Departure.end());//sorting departure array
        int n=Arrival.size();
        int count=0;//stores active platforms for when ith train arrives
        int i=0;//for comparing no of active platforms by using their arrival time
        int j=0;//for comparing departure time of trains
        int answer=0;
        while(i<n){//check all arival times of all trains
            if(Arrival[i]<=Departure[j]){
                count++;//we need one more platform as all platorms are fulled
                i++;//go to next train
            }
            else{
                j++;//go to next greater departure timme
                count--;//active platform number gets decreased by one
            }
            answer=max(answer,count);//store max_active_platform at any instant
        }
        return answer;//return that array
        //approach 2: Brute force TC: O(N*N) and SC: O(N) and AUXILARY SPACE: O(1)
        // int n=arrival.size();
        // int max_platforms_needed=1;
        // for(int i=0;i<n;i++){
        //     int platforms_needed=1;
        //     for(int j=0;j<n;j++){
        //         if(i!=j){
        //             if(Arrival[i]<=Departure[j]&&Arrival[j]<=Departure[i]){
        //                 platforms_needed++;
        //             }
        //         }
        //     }
        //     max_platforms_needed=max(max_platforms_needed,platforms_needed);
        // }
        // return max_platforms_needed;
    }
};
// Given the arrival and departure times of all trains reaching a particular railway station, determine the minimum number of platforms required so that no train is kept waiting. Consider all trains arrive and depart on the same day.



// In any particular instance, the same platform cannot be used for both the departure of one train and the arrival of another train, necessitating the use of different platforms in such cases.


// Examples:
// Input : Arrival = [0900, 0940, 0950, 1100, 1500, 1800] , Departure = [0910, 1200, 1120, 1130, 1900, 2000]



// Output : 3



// Explanation : The first , second , fifth number train can use the platform 1.

// The third and sixth train can use the platform 2.

// The fourth train will use platform 3.

// So total we need 3 different platforms for the railway station so that no train is kept waiting.

// Input : Arrival = [0900, 1100, 1235] , Departure = [1000, 1200, 1240]



// Output : 1



// Explanation : All the three trains can use the platform 1.

// So we required only 1 platform.