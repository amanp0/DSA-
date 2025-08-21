class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int firstPos = -1;
        int lastPos = -1;

    

        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                firstPos = i;
                break;
            }
        }

        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]==target){
                lastPos=i;
                break;
            }
        }
        vector<int> ans ;
        ans.push_back(firstPos);
        ans.push_back(lastPos);
        return ans;
    }
};