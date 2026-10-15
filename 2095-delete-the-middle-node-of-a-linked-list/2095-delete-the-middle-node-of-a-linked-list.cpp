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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==nullptr) return nullptr;
        ListNode* temp2 = head; 
        ListNode* temp1 = temp2->next->next;
        // ListNode* prev=nullptr;
        while(temp1!=nullptr&&temp1->next!=nullptr){
            temp1=temp1->next->next;
            // prev=temp2;
            temp2=temp2->next;     
        }
        temp2->next =temp2->next->next;
        

    return head;
    }
};