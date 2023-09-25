class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dummy= new ListNode();
        ListNode * temp=dummy;
        int carry=0;
        while(l1 !=NULL || l2 !=NULL || carry==1){
            int sum=0;
            if(l1 != NULL){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2 != NULL){
                sum+=l2->val;
                l2=l2->next;
            }
            sum+=carry;
            carry=sum/10;
            ListNode * Node = new ListNode(sum%10);
            temp->next=Node;
            temp=temp->next;
        }
        return dummy->next;
    }
};