/*
Link: https://leetcode.com/problems/search-insert-position/
Given a sorted array of distinct integers and a target value, return the index if the target is found.
If not, the index where it would be if it were inserted in order.
You must write an algorithm with O(log n) runtime complexity
Example 1:
Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:
Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:
Input: nums = [1,3,5,6], target = 7
Output: 4 */
#include <iostream>
#include <vector>

int searchInsert(std::vector<int> &nums, int target)
{
    int s = 0;
    int e = nums.size() - 1;
    while (s <= e)
    {
        int m = s + (e - s) / 2;
        if (nums.at(m) == target)
        {
            return m;
        }
        if (nums.at(m) < target)
        {
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }
    }
    return s;
}

int main()
{
    std::vector<int> v = {1, 3, 5, 6};
    std::cout << searchInsert(v, 2);
    return 0;
}