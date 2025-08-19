class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int n = nums.size();
        long long result = 0;

        int i = 0;
        while (i < n) {
            if (nums[i] == 0) {
                long long l = 0;
                while (i < n && nums[i] == 0) {
                    i++;
                    l++;
                }
                result += (l * (l + 1)) / 2; // accumulate count of subarrays
            } else {
                i++;
            }
        }

        return result;
    }
};
