"""
Link: https://leetcode.com/problems/move-zeroes/
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array.
Example 1:
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:
Input: nums = [0]
Output: [0]
"""
nums = [0, 0, 1]
x = 0
i = 0
# while i < (len(nums)):
#     print(nums)
#     if nums[x] == 0:
#         nums.pop(x)
#         nums.append(0)
#     else:
#         x += 1
#     i += 1
for i in range(len(nums)):
    print(nums)
    if nums[x] == 0:
        nums.pop(x)
        nums.append(0)
    else:
        x += 1
