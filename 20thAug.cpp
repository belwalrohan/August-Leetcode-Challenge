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
    void reorderList(ListNode* head) {
        ListNode* a=head;
        while(a!=NULL && a->next!=NULL && a->next->next!=NULL)
        {
            ListNode* b=a->next;
            ListNode* c=a;
            while(c->next->next!=NULL)
                c=c->next;
            ListNode* d=c->next;
            c->next=NULL;
            c=d;
            a->next=c;
            c->next=b;
            a=c->next;
        }
    }
};
