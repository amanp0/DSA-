class NumArray {
public:
    vector<int> nums;
    NumArray(vector<int>& nums) {
        this->nums= nums;
    }
    
    int sumRange(int left, int right) {
        // NumArray(vector<int> nums);
        int i;
        int j=right;
        int sum =0;
        for(i=left;i<=j;i++){
            sum+=nums[i];
        }
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */