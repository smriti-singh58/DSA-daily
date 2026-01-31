/*
Problem Statement: Given an array Arr[] of integers, rearrange the numbers of the given array into the lexicographically next greater permutation of numbers.

If such an arrangement is not possible, it must rearrange to the lowest possible order (i.e., sorted in ascending order).

eg1:
Input: Arr[] = {1,3,2}
Output: {2,1,3}
Explanation: All permutations of {1,2,3} are {{1,2,3} , {1,3,2}, {2,13} , {2,3,1} , {3,1,2} , {3,2,1}}. So, the next permutation just after {1,3,2} is {2,1,3}.

eg2:
Input : Arr[] = {3,2,1}
Output: {1,2,3}
Explanation : As we see all permutations of {1,2,3}, we find {3,2,1} at the last position. So, we have to return the lowest permutation.
*/

//Brute-force approach:
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the next permutation
    vector<int> nextPermutation(vector<int>& nums) {
        // Store all permutations
        vector<vector<int>> all;

        // Generate all permutations
        sort(nums.begin(), nums.end());
        do {
            all.push_back(nums);
        } while (next_permutation(nums.begin(), nums.end()));

        // Traverse the list to find current permutation
        for (int i = 0; i < all.size(); i++) {
            if (all[i] == nums) {
                // If it's the last permutation
                if (i == all.size() - 1)
                    return all[0];
                // Return the next one
                return all[i + 1];
            }
        }

        // Return original if not found (shouldn't happen)
        return nums;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3};

    vector<int> result = sol.nextPermutation(nums);

    for (int x : result) cout << x << " ";
    cout << endl;

    return 0;
}
