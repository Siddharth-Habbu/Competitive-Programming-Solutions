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
public:
    Node* copyRandomList(Node* head) {
        if(head!= NULL){
            map<Node*,Node*> mp1;
            Node* newHead = new Node(head->val); //Creates a new node with the same value as the original head node.
            Node* oldTemp = head->next; //Points to second node of Original LL 
            Node* newTemp = newHead; // Points to New LL Head 

            mp1[head] = newHead;
            //Creating a Duplicate LL
            while(oldTemp != NULL){
                Node* copyNode = new Node(oldTemp->val); //Creates a Duplicate node of Original LL 
                mp1[oldTemp] = copyNode;
                newTemp->next = copyNode; // points to the duplicate created
                oldTemp = oldTemp->next; //points to next node
                newTemp = newTemp->next; //moves to new Duplicate node
            }
            oldTemp = head;newTemp = newHead;

            //Creating the duplicate random pointer 
            while(oldTemp != NULL){
                newTemp->random = mp1[oldTemp->random]; 
                oldTemp = oldTemp->next;
                newTemp = newTemp->next;
            }
            return newHead;
        }
        else{
            return NULL;
        }


    }
};