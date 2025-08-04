
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canAttendMeetings(vector<vector<int>>& intervals) {
        // Your code goes here
        sort(intervals.begin() , intervals.end());
        for(int i = 0 ; i < intervals.size() - 1 ; i++){
                  // Check if the current meeting overlaps with the next meeting
               if( !(intervals[i][1] <= intervals[i+1][0]) ){
                  return false; // Overlapping intervals found
               }
               }
            
        }
        
        // No overlaps found
        return true;
    };