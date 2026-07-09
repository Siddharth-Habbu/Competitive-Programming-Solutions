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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int size = 0;
        ListNode* Ans = head;
        
        while(temp != NULL){
           
            temp = temp->next;
            size++;
        }
        int ans = (size/2);
        for(int i = 1;i<ans+1;i++){
            Ans = Ans->next;
        }
        
        return Ans;

    }
};