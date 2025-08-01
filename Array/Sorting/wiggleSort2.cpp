#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void wiggleSort(vector<int>& nums) {
       vector<int>ans(nums);
       sort(ans.begin() , ans.end());
       int mid = ( nums.size() + 1 ) / 2; // mid point
       int k = nums.size() - 1 ; // larger half end point
       int j = mid - 1; // smaller half end point

       for(int i = 0 ; i < nums.size() ;i++){
        if( i % 2 == 0){
            nums[i] = ans[j--]; // small half ka largest element
        }
        else{
         nums[i] = ans[k--]; // large half ka largest element
        }
       }
}
};
