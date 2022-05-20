class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int num=head->val;
        while(head->next!=NULL)
        {
            num=2*num+head->next->val;
            head=head->next;
        }
        return num;
    }
};
