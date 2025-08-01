class Solution {
public:

    int binarySearch(int *nums, int s, int e, int key){
        
        // base case

        //element not found
        if(s > e){
            return -1;
        }
        
        //element found 
        int mid = s + (e-s)/2;
        if(nums[mid] == key){
            return mid;
        }
        if(nums[mid] < key){
            return binarySearch(nums, mid + 1, e, key);
        }
        else{
            return binarySearch(nums, s, mid-1, key);
        }
    }
    int search(vector<int>& nums, int target) {
        // using recursive function binarySearch

        return binarySearch(nums.data(), 0, nums.size() - 1, target);

    }


};
