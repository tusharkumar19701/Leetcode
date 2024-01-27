//Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
//You must implement a solution with a linear runtime complexity and use only constant extra space.

//Input: nums = [2,2,1]
//Output: 1

class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int a = 0;
        for(int i=0; i< nums.size();i++) {
            a = a ^ nums[i];  // XOR
        }
        return a;
    }
};