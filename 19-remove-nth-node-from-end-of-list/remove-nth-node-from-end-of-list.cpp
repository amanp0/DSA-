class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Step 1: count total nodes
        int count = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }

        // Step 2: if we need to remove the head
        if (count == n) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        // Step 3: find the node just before the one to delete
        int steps = count - n;
        temp = head;
        while (--steps > 0) {
            temp = temp->next;
        }

        // Step 4: delete the target node
        ListNode* deleteNode = temp->next;
        temp->next = deleteNode->next;
        delete deleteNode;

        return head;
    }
};
