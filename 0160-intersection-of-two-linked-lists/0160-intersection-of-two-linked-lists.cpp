/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len1 = 0;
        int len2 = 0;
        int i;
        ListNode* temp1= headA;
        ListNode* temp2= headB;
        while(temp1!=NULL){
            temp1=temp1->next;
            len1++;
        }
        while(temp2!=NULL){
            temp2=temp2->next;
            len2++;
        }
        temp1= headA;
        temp2= headB;
        int n=abs(len1-len2);
        if(len1>len2){
            for(i=1;i<=n;i++){
                temp1=temp1->next;
            }
        }
        if(len1<len2){
            for(i=1;i<=n;i++){
                temp2=temp2->next;
            }
        }
        for(i=0;i<len1;i++){          
            if(temp1==temp2){
                return temp1;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return NULL;
    }
};