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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* slow =head,*fast = head;
        ListNode* ptr = new ListNode(0);
        if(head->next==NULL) return NULL;
        ptr->next = head;
        while(fast!=NULL&&fast->next!=NULL){
            fast= fast->next->next;
            slow = slow->next;
            ptr = ptr->next;
        }
        ptr->next = slow->next;
        return head;
        
    }
};