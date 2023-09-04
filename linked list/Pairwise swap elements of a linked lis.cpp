// https://practice.geeksforgeeks.org/problems/pairwise-swap-elements-of-a-linked-list-by-swapping-data/1

class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) 
    {
        Node *tmp=head,*prev=NULL;
        while(head and head->next){
            Node *cur=head;
            head=head->next->next;
            Node *nxt=cur->next;
            cur->next=head;
            nxt->next=cur;
            if(prev!=NULL) prev->next=nxt;
            else tmp=nxt;
            prev=cur;
        }
        return tmp;
    }
};
