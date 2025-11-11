/*
class Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* rotate(Node* head, int k) {
        
        Node *temp = head;
        // code here
        int count=0;
          Node *last;
        while(temp){
            if(temp->next == NULL){
                last =temp;
            }
            temp = temp->next;
            count++;
        }
        if(count==1||head==NULL) return head;
        k = k%count;
      
        while(k){
            Node *newtail  = head;
            head = head->next;
            last->next =newtail;
            last = newtail;
            last->next = NULL;
            k--;
    }
    return head;
    }
};
