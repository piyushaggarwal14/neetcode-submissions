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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL){
            return head;
        }

        int count = 1;
        ListNode* temp = head;
        while(temp->next!=NULL){
            temp=temp->next;
            count++;
        }

        int desired = count-n;

        if(desired==0){
            if(head->next==NULL){
                return NULL;
            }
            return head->next;
        }
        temp = head;
        ListNode* prev = head;
        while(desired>0){
            prev=temp;
            temp=temp->next;
            desired--;
        }
        prev->next=temp->next;
        return head;

    }
};
