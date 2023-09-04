// \https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1

int intersectPoint(Node* head1, Node* head2)
{
    Node *a=head1,*b=head2;
    while(a and b){
        a=a->next;
        b=b->next;
    }
    Node *c=head1,*d=head2;
    while(a || b){
        if(a) c=c->next,a=a->next;
        if(b) d=d->next,b=b->next;
    }
    while(c and d and c!=d) c=c->next, d=d->next;
    if(c== d and c!=NULL) return c->data;
    return -1;
}
