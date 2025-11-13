
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
    ListNode* oddEvenList(ListNode* head) {
        int odd = 1;
        ListNode *dummyodd = new ListNode(0);
        ListNode *oddtail = dummyodd;
        ListNode *dummyeven = new ListNode(0);
        ListNode *eventail = dummyeven;
        ListNode* ptr = head;
        while(ptr){
            if(odd){
                oddtail->next = ptr;
                ptr = ptr->next;
                oddtail = oddtail->next;
                odd=0;
            }
            else{
                eventail->next = ptr;
                ptr = ptr->next;
                eventail = eventail->next;
                odd=  1;
            }
        }
        if(dummyodd->next) oddtail->next = dummyeven->next;
        eventail->next = NULL;
        return dummyodd->next;
    }
};