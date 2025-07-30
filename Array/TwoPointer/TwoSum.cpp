#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int , int >mymap;
        for(int i = 0 ; i <nums.size() ; i++){
          if(mymap.find(target - nums[i]) != mymap.end()){
             ans.push_back(i);
             ans.push_back(mymap[target - nums[i]]);
          }
          mymap[nums[i]] = i;
        }
        return ans;
    }
};