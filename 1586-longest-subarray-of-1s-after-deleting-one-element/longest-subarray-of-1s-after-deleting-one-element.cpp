class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int count = 0;       // count of zeros in window
        int maxLength = 0;   // result
        int i = 0;           // left pointer

        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] == 0) {
                count++;
            }

            while (count > 1) {
                if (nums[i] == 0) {
                    count--;
                }
                i++;
            }

            // window length is (j - i), because we need to delete 1 zero
            maxLength = max(maxLength, j - i);
        }
        return maxLength;
    }
};
