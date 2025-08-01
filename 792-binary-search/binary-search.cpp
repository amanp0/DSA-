// class Solution {
// public:

//     bool binarySearch(int *nums, int s, int e, int key){
        
//         // base case

//         //element not found
//         if(s > e){
//             return false;
//         }
        
//         //element found 
//         int mid = s + (e-s)/2;
//         if(nums[mid] == key){
//             return true;
//         }
//         if(nums[mid] < key){
//             return binarySearch(nums, mid + 1, e, key);
//         }
//         else{
//             return binarySearch(nums, s, mid-1, key);
//         }
//     }
//     int search(vector<int>& nums, int target) {
//         // using recursive function binarySearch

//         bool found = binarySearch(nums.data(), 0, nums.size() - 1, target);
//         return -1;

//     }


// };

class Solution {
public:

    int binarySearch(int *nums, int s, int e, int key){
        if(s > e){
            return -1;
        }

        int mid = s + (e - s) / 2;
        if(nums[mid] == key){
            return mid;
        }
        if(nums[mid] < key){
            return binarySearch(nums, mid + 1, e, key);
        } else {
            return binarySearch(nums, s, mid - 1, key);
        }
    }

    int search(vector<int>& nums, int target) {
        return binarySearch(nums.data(), 0, nums.size() - 1, target);
    }
};
