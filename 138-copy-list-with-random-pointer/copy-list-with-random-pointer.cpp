/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
private:
    void insertAtTail(Node*& head, Node*& tail, int d) {
        Node* newNode = new Node(d);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

public:
    Node* copyRandomList(Node* head) {
        // Step 1: Create a cloned list with only 'next' pointers
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;

        Node* temp = head;
        while (temp != NULL) {
            insertAtTail(cloneHead, cloneTail, temp->val);
            temp = temp->next;
        }

        // Step 2: Map original nodes to cloned nodes
        unordered_map<Node*, Node*> oldToNewNode;
        Node* originalNode = head;
        Node* cloneNode = cloneHead;

        while (originalNode != NULL && cloneNode != NULL) {
            oldToNewNode[originalNode] = cloneNode;
            originalNode = originalNode->next;
            cloneNode = cloneNode->next;
        }

        // Step 3: Assign random pointers
        originalNode = head;
        cloneNode = cloneHead;

        while (originalNode != NULL) {
            cloneNode->random = (originalNode->random != NULL)
                                ? oldToNewNode[originalNode->random]
                                : NULL;
            originalNode = originalNode->next;
            cloneNode = cloneNode->next;
        }

        return cloneHead;
    }
};
