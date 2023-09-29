bool isPalindrome(ListNode* head) {
        ListNode * dummy=head;
        ListNode * fast=dummy;
        ListNode * slow=dummy;
        while(fast->next!=NULL && fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        } 
        ListNode* re=slow->next;
        slow->next=rev(re);
        slow=slow->next;
        while(slow){
            if(head->val != slow->val) return false;
            head=head->next;
            slow=slow->next;
        }
        return true;
    }
    ListNode* rev(ListNode* re){
        ListNode* prev=NULL;
        while(re!=NULL){
            ListNode * d=re->next;
            re->next=prev;
            prev=re;
            re=d;
        }
        return prev;
    }