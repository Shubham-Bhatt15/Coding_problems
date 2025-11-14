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
    int getDecimalValue(ListNode* head) {
        vector<int> ans;
        while(head){
           ans.push_back(head->val);
           head = head->next;

        }
        int value =0;
        int a = 1;
        for(int i=ans.size()-1;i>=0;i--){
            value = value+ans[i]*a;
            a=a*2;
        }
        return value;
    }
};