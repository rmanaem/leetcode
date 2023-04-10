"""
Link: https://leetcode.com/problems/reverse-string/
Write a function that reverses a string. The input string is given as an array of characters s.
You must do this by modifying the input array in-place with O(1) extra memory.
Example 1:
Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
Example 2:
Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
"""


def reverseString(s):
    n = len(s) - 1
    temp = ''
    for i in range((n+1)//2):
        temp = s[i]
        s[i] = s[n-i]
        s[n-i] = temp
    print(s)


reverseString(["h", "e", "l", "l", "o"])
reverseString(["H", "a", "n", "n", "a", "h"])
