// https://practice.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1

class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        struct node *last=NULL,*t=head,*prev=NULL, *st=head;
        head=NULL;
        for(int i=1;t;i++){
            struct node* cur=t;
            t=t->next;
            cur->next=prev;
            prev=cur;
            if(i%k==0 || t==NULL){
                if(last) last->next=cur;
                else head=cur;
                last=st;
                st->next=NULL;
                st=t;
            }
        }
        return head;
    }
};
