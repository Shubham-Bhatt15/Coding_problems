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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * tail;
        int digit1,digit2;
        int carry  =0;
        ListNode* dummyHead = new ListNode(0);
        tail = dummyHead;
        int sum =0;

        while(l1!=NULL||l2!=NULL||carry!=0){
            

            if(l1!=NULL){
                digit1=l1->val;
                l1 = l1->next;

            }
            else digit1=0;
            if(l2!=NULL){
                digit2=l2->val;
                l2=l2->next;

            } 
            else digit2=0;

            sum = digit1+digit2+carry;
            int digit = sum%10;
            ListNode * newNode = new ListNode(digit);
            carry = sum/10;
            tail->next = newNode;
            tail= tail->next;
        
        }
        ListNode * result = dummyHead->next;
        delete(dummyHead)
        return result;
    }
};