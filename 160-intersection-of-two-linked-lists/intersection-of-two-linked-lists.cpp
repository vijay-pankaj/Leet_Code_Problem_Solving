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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp=headA;
        while(temp!=NULL){
            ListNode *l2=headB;
            while(l2!=NULL){
                if(l2==temp)return l2;
                l2=l2->next;
            }
            temp=temp->next;
        }
        return NULL;
    }
};