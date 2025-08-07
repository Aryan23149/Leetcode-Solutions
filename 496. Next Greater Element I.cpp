class Solution {
    public:
        vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
            // stack<int> s;
            // vector<int> answer;
            // for(int i=nums2.size()-1;i>=0;i--){
            //     int element=nums2[i];
            //     while(!s.empty() && s.top()<=element){
            //         s.pop();
            //     }
            //     if(s.empty()){
            //         answer.push_back(-1);
            //     }
            //     else{
            //         answer.push_back(s.top());
            //     }
            //     s.push(element);
            // }
            // reverse(answer.begin(),answer.end());
            // vector<int> answer2;
            // for(int i=0;i<nums1.size();i++){
            //     int element=nums1[i];
            //     for(int j=0;j<nums2.size();j++){
            //         if(nums2[j]==element){
            //             answer2.push_back(answer[j]);
            //             break;
            //         }
            //     }
            // }
            // return answer2;
        }
    };