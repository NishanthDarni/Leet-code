#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        int carry = 0;
        int value, sum, insert;
        ListNode *head = nullptr, *tail = nullptr;
        while (l1 || l2 || carry)
        {
            value = 0;
            if (l1)
            {
                value = l1->val;
                l1 = l1->next;
            }
            if (l2)
            {
                value += l2->val;
                l2 = l2->next;
            }
            sum = carry + value;
            insert = sum % 10;
            carry = sum / 10;
            Insert(&head, &tail, insert);
        }
        if (carry != 0)
        {
            Insert(&head, &tail, carry);
        }
        return head;
    }
    void Insert(ListNode **head, ListNode **tail, int data)
    {
        ListNode *node = new ListNode;
        node->val = data;
        node->next = nullptr;
        if (*head == nullptr)
        {
            *head = node;
            *tail = node;
            return;
        }
        (**tail).next = node;
        *tail = node;
        return;
    }
};