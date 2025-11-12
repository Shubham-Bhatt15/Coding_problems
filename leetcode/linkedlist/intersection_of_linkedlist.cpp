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


        // Brute Method
        
        // ListNode* ptr = headA;
        // unordered_map<ListNode*,int>mp;
        // while(ptr){
        //     mp[ptr]++;
        //     ptr = ptr->next;
        // }
        // ptr = headB;
        // while(ptr){
        //     if(mp[ptr]) return ptr;
        //     ptr = ptr->next;
        // }
        // return NULL;


        // LENGTH DIFFERENCE METHOD.
        int firstsize = 0;
        int secondsize = 0;
        ListNode* temp  = headA;

        while(temp){
            firstsize++;
            temp  = temp->next;
        }
        temp = headB;
        while(temp){
            secondsize++;
            temp  = temp->next;
        }
        int n ;
        ListNode* temp2;
        if(firstsize>secondsize){
            temp  = headA;
            temp2 = headB;
            n = firstsize-secondsize;
        }
        else{
            temp = headB;
            temp2 = headA;
            n = secondsize-firstsize;
        }
        int k = 0;
        // find the linked list difference.
        while(k!=n){
            temp = temp->next;
            k++;
        }
        // check for the intersection. if not will return NULL.
        while(temp&&temp2&&temp!=temp2){
            temp = temp->next;
            temp2 = temp2->next;
        }
        return temp;


    }
};