class Solution {
public:
    #include <bits/stdc++.h>
#include <vector>
    void rotate(vector<int>& nums, int k) {
     vector<int>temp = nums;
        for(int i =0;i<nums.size();i++)
        {
            
            temp[ (i+k) % nums.size() ] = nums[i];
            
        }
        nums = temp;
    }
};