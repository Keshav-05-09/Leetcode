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
    int n;
    int len=0;

    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head; 
        while(temp!=nullptr){
            temp=temp->next;
            len = len+1;
        }
        temp = head;
        for(int i = 0 ; i<len/2;i++){
            temp=temp->next;
        }
        return temp;
    }
};