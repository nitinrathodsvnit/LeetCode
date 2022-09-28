
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head, *slow=head;
        int from_begin = n;
        while(from_begin-- and temp){
            temp=temp->next;
        }
        if(temp==NULL){
            return head->next;
        }
        while( temp->next){
            temp = temp->next;
            slow = slow->next;
            cout<<temp->val<<" ";
        }
        slow->next = slow->next->next;
        return head;        
    }
};