// https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1

class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        Node *fast=head,*slow=head,*prev;
        while(fast and fast->next){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) break;
        }
        if(slow!=fast) return;
        while(head != slow) prev=slow,slow=slow->next, head=head->next;
        prev->next=NULL;
    }
};
