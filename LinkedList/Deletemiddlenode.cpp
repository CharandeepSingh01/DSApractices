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