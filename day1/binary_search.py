"""
Link: https://leetcode.com/problems/binary-search/
Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums.
If target exists, then return its index. Otherwise, return -1.
You must write an algorithm with O(log n) runtime complexity.
Example 1:
Input: nums = [-1, 0, 3, 5, 9, 12], target = 9
Output: 4
Explanation: 9 exists in nums and its index is 4
Example 2:
Input: nums = [-1, 0, 3, 5, 9, 12], target = 2
Output: -1
Explanation: 2 does not exist in nums so return -1 
"""


def search(nums, target):
    """
    :type nums: List[int]
    :type target: int
    :rtype: int
    """
    s = 0
    e = len(nums)-1
    while s <= e:
        m = s + (e - s)//2
        if target == nums[m]:
            return m
        if target > nums[m]:
            s = m + 1
        else:
            e = m - 1
    return -1


print(search([-1, 0, 3, 5, 9, 12], 1))
