class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> ls;
        map<int, int> mpp;
        int mini = (int)(n/3) + 1;
        for(int i = 0; i<n; i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]] == mini){
                ls.push_back(nums[i]);
            }
            if(ls.size() == 2) break;

        }
        sort(ls.begin(), ls.end());
        return ls;
    }
};