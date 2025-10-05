class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size(); // Use `digits`, not `arr`
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0; // Set to 0 and carry will be handled in next loop
        }
        // If all digits were 9, we need an extra 1 at the front
        digits.insert(digits.begin(), 1);
        return digits;
    }
};