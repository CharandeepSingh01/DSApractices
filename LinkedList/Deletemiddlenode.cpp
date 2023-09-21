class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        int count=1;
        ListNode * dum= new ListNode();
        dum=head;
        while(dum->next!=NULL){
            dum=dum->next;
            count++;
        }
        ListNode * dummy= new ListNode();
        dummy->next=head;
        ListNode *fast=dummy;
        for(int i=1;i<=count/2;i++){
            fast=fast->next;
        }
        fast->next=fast->next->next;
        return dummy->next;
    }
};


class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode * dummy= new ListNode();
        dummy->next=head;
        ListNode *fast=dummy;
        ListNode *slow=dummy;
        while(fast->next!=NULL && fast->next->next !=   NULL ){
            fast=fast->next->next;
            slow=slow->next;
        }
        slow->next=slow->next->next;
        return dummy->next;
    }
};