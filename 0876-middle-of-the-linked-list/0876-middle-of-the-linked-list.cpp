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
        // method 1
        // ListNode* temp = head; 
        // while(temp!=nullptr){
        //     temp=temp->next;
        //     len = len+1;
        // }
        // temp = head;
        // for(int i = 0 ; i<len/2;i++){
        //     temp=temp->next;
        // }
        // return temp;



        // method 2 (slow-fast approach)
        ListNode* temp1 = head; 
        ListNode* temp2 = head;
        while(temp1!=nullptr&&temp1->next!=nullptr){
            temp1=temp1->next->next;
            temp2=temp2->next;
            len = len+1;
    }
    return temp2;
    }
};