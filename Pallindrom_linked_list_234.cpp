/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> s;
        ListNode *temp=head;
        int size=0;
        while(temp!=NULL)
        {
            size++;
            temp=temp->next;
        }
        temp=head;
        for(int i=1;i<=size;i++)
        {
            if(i<=size/2)
            {
                s.push(temp->val);
                temp=temp->next;
            }else if(i>size/2)
            {
                if(size%2==1 && i==size/2+1)
                {
                    temp=temp->next;
                  continue;  
                }
                if(temp->val!=s.top())
                {
                    return false;
                }
                s.pop();
                temp=temp->next;
            }
        }
        return true;
    }
};