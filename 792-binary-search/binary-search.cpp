class Solution {
public:
    int search(vector<int>& nums, int target) {
        //Binary search
        
        int n = nums.size();
        int s = 0;
        int e = n-1;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(nums[mid] == target){
                return mid;

            }
            if(target > nums[mid]){
                s = mid + 1;
            }
            else{
                e = mid -1;
            }
           
        }
         return -1;
    }
};