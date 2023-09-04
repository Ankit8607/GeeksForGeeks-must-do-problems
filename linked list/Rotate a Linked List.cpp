// https://practice.geeksforgeeks.org/problems/rotate-a-linked-list/1

class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        Node *root=head,*prev;
        while(k--) prev=head,head=head->next;
        prev->next=NULL;
        prev=head;
        while(head){
            if(head->next==NULL){
                head->next=root;
                break;
            }
            head=head->next;
        }
        return prev?prev:root;
    }
};
