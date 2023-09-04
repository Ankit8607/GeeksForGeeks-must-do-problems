// https://practice.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1

class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        Node *z=NULL,*t=NULL,*o=NULL,*oend,*zend;
        while(head){
            Node *tmp=head;
            head=head->next;
            if(tmp->data==0){ if(z==NULL) zend=tmp; tmp->next=z;z=tmp;} 
            else if(tmp->data==1){ if(o==NULL) oend=tmp; tmp->next=o;o=tmp;}
            else{ tmp->next=t;t=tmp;}
        }
        if(z and o){ zend->next=o; oend->next=t; return z;}
        if(z) {zend->next=t; return z;}
        if(o) {oend->next=t; return o;}
        return t;
        
    }
};
