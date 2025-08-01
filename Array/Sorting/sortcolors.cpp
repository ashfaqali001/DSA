#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        // sort(nums.begin() , nums.end());
        int low = 0;
        int mid = 0;
        int n = nums.size();
        int high = n-1;
        while (mid <= high ){
        if(nums[mid] == 0){
            swap(nums[mid],nums[low]);
            low++;
            mid++;
        }
        if(nums[mid] == 1){
            mid++;
        }
        if(nums[mid] == 2){
            swap(nums[mid] ,nums[high]);
            high--;
        }
        }
    }
};