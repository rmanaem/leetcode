/*
Link: https://leetcode.com/problems/squares-of-a-sorted-array/
Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.
Example 1:
Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].
Example 2:
Input: nums = [-7,-3,2,3,11]
Output: [4,9,9,49,121] */

// Solution using two pointers
#include <stdlib.h>
#include <iostream>
#include <vector>

std::vector<int> sortedSquare(std::vector<int> &nums)
{
    int n = 0;
    int p = nums.size() - 1;
    std::vector<int> v(nums.size());
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (abs(nums[p]) > abs(nums[n]))
        {
            v[i] = nums[p] * nums[p];
            p--;
        }
        else
        {
            v[i] = nums[n] * nums[n];
            n++;
        }
    }
    return v;
}

int main()
{
    std::vector<int> v{-7, -3, 2, 3, 11};
    for (int i : sortedSquare(v))
    {
        std::cout << " " << i;
    }
    return 0;
}