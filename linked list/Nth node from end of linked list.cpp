// https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1

class Solution{
public:

    int getNthFromLast(Node *head, int n)
    {
        Node *tmp=head;
        while(n--){
            if(tmp==NULL) return -1;
            tmp=tmp->next;
        }
        while(tmp){
            tmp=tmp->next;
            head=head->next;
        }
        return head->data;
    }
};
