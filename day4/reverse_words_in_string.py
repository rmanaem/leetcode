"""
Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.
Example 1:
Input: s = "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"
Example 1:
Input: s = "God Ding"
Output: "doG gniD"
"""


from re import S


def reverseWords(s):
    temp = ''
    s = s.split(' ')
    for i in range(len(s)):
        ls = []
        for j in range(len(s[i])):
            ls.append(s[i][j])
        s[i] = ls

    for w in s:
        n = len(w)
        for i in range(n//2):
            temp = w[i]
            w[i] = w[n-1-i]
            w[n-1-i] = temp
    rev = ''
    for i in range(len(s)):
        temp = ''
        for c in s[i]:
            temp += c
        rev += temp + ' '
    rev = rev[:len(rev)-1]
    print(rev)


reverseWords('Let\'s take LeetCode contest')
reverseWords('God Ding')
