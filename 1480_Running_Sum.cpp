
//LeetCode 1480: Running Sum of 1d Array

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

        // Start from the second element
        for (int i = 1; i < nums.size(); i++) {

            // Add the previous running sum
            // to the current element
            nums[i] = nums[i] + nums[i - 1];
        }

        // Return the updated array
        return nums;
    }
};
