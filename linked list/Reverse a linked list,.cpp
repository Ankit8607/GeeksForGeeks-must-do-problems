// https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1

class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        struct Node *tmp=head->next;
        head->next=NULL;
        while(tmp){
            struct Node *t=tmp;
            tmp=tmp->next;
            t->next=head;
            head=t;
        }
        return head;
    }
};
