class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL||head->next==NULL)
            return false;
        ListNode* slow=head->next;
        ListNode *fast=head->next->next;
        while(fast&&fast->next)
        {
            if(slow==fast)
                return true;
            slow=slow->next;
            fast=fast->next->next;
        }
        
        return false;
    }
};
