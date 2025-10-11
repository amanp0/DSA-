/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* findNthNode(ListNode* temp, int k){
        int count = 1;
        while(temp != NULL){
            if(count == k) return temp;
            count++;
            temp = temp -> next;
        }
        return nullptr; // safety
    }

    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || k == 0) return head;

        // Step 1: Find length and last node
        ListNode* tail = head;
        int len = 1;
        while(tail -> next != NULL){
            tail = tail -> next;
            len++;
        }

        // Step 2: Normalize k
        k = k % len;
        if(k == 0) return head;

        // Step 3: Make list circular
        tail -> next = head;

        // Step 4: Find new last node (len - k)
        ListNode* newLastNode = findNthNode(head, len - k);

        // Step 5: Update head and break the circle
        head = newLastNode -> next;
        newLastNode -> next = NULL;

        return head;
    }
};
