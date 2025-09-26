class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL) return NULL;

        // Step 1: Insert clone nodes in between
        Node* temp = head;
        while(temp != NULL){
            Node* newNode = new Node(temp->val);
            newNode->next = temp->next;
            temp->next = newNode;
            temp = newNode->next;
        }

        // Step 2: Copy random pointers
        temp = head;
        while(temp != NULL){
            if(temp->random != NULL){
                temp->next->random = temp->random->next;
            }
            temp = temp->next->next;
        }

        // Step 3: Separate original and clone lists
        Node* original = head;
        Node* clone = head->next;
        Node* cloneHead = clone;

        while(original != NULL){
            original->next = original->next->next;
            if(clone->next != NULL){
                clone->next = clone->next->next;
            }
            original = original->next;
            clone = clone->next;
        }

        return cloneHead;
    }
};
