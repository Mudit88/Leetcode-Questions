/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int length(ListNode * head)
    {
        int count = 0;
        ListNode * temp = head;
        while(temp)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len1 = length(headA);
        int len2 = length(headB);
        ListNode * temp;
        ListNode * x;
        if(len1>len2)
        {
            temp = headA;
            x = headB;
        }
        else
        {
            temp = headB;
            x = headA;
        }
        int diff = max(len1,len2)-min(len1,len2);
        for(int i = 0;i<diff;i++)
        {
            temp = temp->next;
        }
        while(temp!=NULL and x!=NULL)
        {
            if(temp==x)return temp;
            temp = temp->next;
            x = x->next;
        }
        return NULL;
        
        
    }
};