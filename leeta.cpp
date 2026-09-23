// LeetCode 1685 - Sum of Absolute Differences in a Sorted Array
// https://leetcode.com/problems/sum-of-absolute-differences-in-a-sorted-array/
// Approach: prefix sums — O(n) time, O(1) extra space (besides output)
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:

    int getSum(const vector<int>& v ,int start, int end ){
        int s=0;
        if (start>end) return 0;
        for(int i=start; i<=end; ++i){
            s+=v[i];

        }
        return s;
    }
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size();
        vector<int> res(n);
        res[0]=getSum(nums,1,n-1)+(1-n)*nums[0];
        for(int i=0; i<n-1;++i){
            res[i+1]=res[i]+(2*i-n+2)*(nums[i+1]-nums[i]);}
        return res;}
};