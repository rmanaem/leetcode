/* Link: https://leetcode.com/problems/reverse-words-in-a-string-iii/
Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.
Example 1:
Input: s = "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"
Example 1:
Input: s = "God Ding"
Output: "doG gniD" */

#include <string>
#include <iostream>

char *reverseString(char s[], int n)
{
    char temp = 'a';
    for (int i = 0; i < n / 2; i++)
    {
        temp = s[i];
        s[i] = s[n - 1 - i];
        s[n - 1 - i] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        std::cout << s[i] << " ";
    }
    return s;
}

char *stringToArrary(char s[], int n)
{
    char *arr = new char[n];
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ' ')
        {
        }
    }
}

std::string reverseWords(std::string s)
{
    std::string s("s");
    return s;
}

int main()
{
    std::string s = "allo";
    char arr[] = "Let's go fuck";
    std::cout << arr[1];
    return 0;
}