
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        // Count valid elements
        int k = 0;

        // Check every element
        for (int i = 0; i < nums.size(); i++) {

            // Keep elements that are not equal to val
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }

        // Return the number of remaining elements
        return k;
    }
};
