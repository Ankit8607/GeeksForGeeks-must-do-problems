// https://practice.geeksforgeeks.org/problems/intersection-of-two-linked-list/1

class Solution{
  public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        unordered_map<int,int>mp;
        while(head2){
            mp[head2->data]=1;
            head2=head2->next;
        }
        Node *tmp2=new Node(0);
        tmp2->next=head1;
        Node *tmp=tmp2;
        while(head1){
            if(mp[head1->data]){
                tmp->next->data=head1->data;
                tmp=tmp->next;
            }
            head1=head1->next;
        }
        tmp->next=NULL;
        return tmp2->next;
    }
};
