class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if (head == nullptr)
            return head;
        int length = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            length++;
            temp = temp->next;
        }
                if (n == length) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
       int pos = length - n + 1;

        temp = head;
        ListNode* prev = nullptr;

        int count = 1;

        while (count < pos) {
            prev = temp;
            temp = temp->next;
            count++;
        }

        prev->next = temp->next;
        delete temp;

        return head;
    }
};