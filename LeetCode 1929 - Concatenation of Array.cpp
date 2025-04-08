/*
 ? Problem: Concatenation of Array (LeetCode 1929)
 
 Given an integer array `nums` of length `n`, 
 create a new array `ans` of length `2n` such that:
 - ans[i] = nums[i]
 - ans[i + n] = nums[i] for 0 <= i < n
 
 Return the resulting array.
 
 ?? Example 1:
  Input: nums = [1, 2, 1]
 Output: [1, 2, 1, 1, 2, 1]
 
 */
 #include <iostream>
#include <vector>
using namespace std;

vector<int> getConcatenation(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n * 2);
    for (int i = 0; i < n; i++) {
        ans[i] = nums[i];
        ans[i + n] = nums[i];
    }
    return ans;
}

int main() {
    vector<int> nums = {1, 2, 1};
    vector<int> result = getConcatenation(nums);

    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
//Time Complexity  : O(n)
//Space Complexity : O(2n)