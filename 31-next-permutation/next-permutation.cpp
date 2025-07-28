class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // by using STL 
        next_permutation(nums.begin(), nums.end());
        //return nums;
    }
};