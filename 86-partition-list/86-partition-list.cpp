class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode lessHead(0), moreHead(0), *less = &lessHead, *more = &moreHead;
        while (head) {
            auto& end = head->val < x ? less : more;
            end = end->next = exchange(head, exchange(head->next, nullptr));
        }
        less->next = moreHead.next;
        return lessHead.next;
    }
};