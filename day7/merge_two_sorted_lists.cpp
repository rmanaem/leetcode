/* Link: https://leetcode.com/problems/merge-two-sorted-lists/
You are given the heads of two sorted linked lists list1 and list2.
Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.
Return the head of the merged linked list.
Example 1:
Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]
Example 2:
Input: list1 = [], list2 = []
Output: []
Example 3:
Input: list1 = [], list2 = [0]
Output: [0]
Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
}; */

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
    if (list1 == nullptr & list2 == nullptr)
    {
        return list1;
    }
    if (list1 == nullptr)
    {
        return list2;
    }
    if (list2 == nullptr)
    {
        return list1;
    }
    ListNode *temp = nullptr;

    if (list1->val > list2->val)
    {
        list2->next = mergeTwoLists(list1, list2->next);
        return list2;
    }
    else
    {
        list1->next = mergeTwoLists(list1->next, list2);
        return list1;
    }
}