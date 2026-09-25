class Solution {
public:
    void reorderList(ListNode* head) {

        if (head == nullptr || head->next == nullptr)
            return;

       
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

       
        ListNode* temp = slow->next;
        slow->next = nullptr;

        
        ListNode* prev = nullptr;

        while (temp != nullptr) {
            ListNode* front = temp->next;

            temp->next = prev;
            prev = temp;
            temp = front;
        }

      
        ListNode* first = head;
        ListNode* second = prev;

        while (second != nullptr) {
            ListNode* next1 = first->next;
            ListNode* next2 = second->next;

            first->next = second;
            second->next = next1;

            first = next1;
            second = next2;
        }
    }
};