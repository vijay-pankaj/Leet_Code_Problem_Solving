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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)return head;
        ListNode* temp = head;
        ListNode* remp = temp->next;
        while (temp!=NULL&& remp != NULL) {
            if (temp->val == remp->val) {
                temp->next = remp->next;
                delete (remp);
                remp = temp->next;
            } else {
                temp = temp->next;
                remp = temp->next;
            }
        }
        return head;
    }
};