class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum =0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int lsum=0;
        for(int i=0;i<nums.size();i++){
            int rsum = sum - nums[i] - lsum;
            if(rsum == lsum) return i;
            lsum +=nums[i];
        }
        return -1;
    }
};