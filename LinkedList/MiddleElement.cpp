// Given the head of a singly linked list, return the middle node of the linked list.

// If there are two middle nodes, return the second middle node.


class Solution {
public:
    ListNode* middleNode(ListNode* head) {
     ListNode *dummy=new ListNode();
     ListNode *fast=head;
     ListNode *slow=head;
     while(fast->next!=NULL){

         if(fast->next->next!=NULL){
         fast=fast->next->next;
         slow=slow->next;}
         else {slow=slow->next;
         break;}
     }   
     dummy->next=slow;
     return dummy->next;
    }
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        ListNode* mid = head;
        while(temp != NULL && temp -> next != NULL){
            mid = mid -> next;
            temp = temp->next-> next;
        }
        return mid;
    }
};