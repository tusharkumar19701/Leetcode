//Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
//We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
//You must solve this problem without using the library's sort function.

//Input: nums = [2,0,2,1,1,0]
//Output: [0,0,1,1,2,2]

//Sort 0s,1s and 2s



// 1st method - 2 * O(n) time complexity
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int f = 0,s = 0,t = 0;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] == 0) {
                f++;
            } else if(nums[i] == 1) {
                s++;
            }
            else {
                t++;
            }
        }
        for(int i=0;i<f;i++) {
            nums[i] = 0;
        }
        for(int i=f;i<f+s;i++) {
            nums[i] = 1;
        }
        for(int i=f+s; i<nums.size(); i++) {
            nums[i] = 2;
        }
    }
};


// Method 2 - Dutch Flag Algorithm
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = 0;
        int m = 0;
        int h = nums.size() - 1;

        while(m <= h) {
            int x = nums[m];
            if(x == 0) {
                swap(nums[l],nums[m]);
                l++; m++;
            } else if(x == 1) {
                m++;
            } else {
                swap(nums[h],nums[m]);
                h--;
            }
        }

    }
};