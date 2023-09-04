// https://practice.geeksforgeeks.org/problems/merge-two-sorted-linked-lists/1

Node* sortedMerge(Node* head1, Node* head2)  
{  
    Node *head=NULL,*prev=NULL;
    while(head1 or head2){
        // cout<<head1->data<<" "<<head2->data<<endl;
        if(head2==NULL || (head1!=NULL && head1->data<head2->data)){
            if(prev==NULL) head=head1;
            else prev->next=head1;
            prev=head1;
            head1=head1->next;
        }
        else{
            if(prev==NULL) head=head2;
            else prev->next=head2;
            prev=head2;
            head2=head2->next;
        }
    }
    return head;
} 
