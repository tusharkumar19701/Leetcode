//Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.
//A subarray is a contiguous non-empty sequence of elements within an array.

 


class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // created a map which stores sum and count of the given sum
        unordered_map<int,int> prevSum; 
        int count = 0;
        int sum = 0;
        for(int i=0; i<nums.size(); i++) {
            sum += nums[i];

            if(sum == k) {
                count++;
            }
            if(prevSum.find(sum-k) != prevSum.end()) {
                count+= prevSum[sum-k];
                //prevSum[sum-k] gives the count of the sum-k element in the map
            }
            // updating the count of sum in the map
            prevSum[sum]++;
        }
        return count;
    }
};