// https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    
    struct Node* reverse(struct Node *head){
        struct Node *prev=NULL;
        while(head){
            Node *tmp=head;
            head=head->next;
            tmp->next=prev;
            prev=tmp;
        }
        return prev;
    }
    
    Node *rec(Node* &first, Node* &second,int &carry){
        if(first==NULL and second==NULL) return NULL;
        
        carry+=(first?first->data:0)+(second?second->data:0);
        int val=carry%10;
        carry/=10;
        if(first==NULL){ 
            second->data=val;
            second->next=rec(first,second->next,carry);
            return second;
        }
        else if(second==NULL){ 
            first->data=val;
            first->next=rec(first->next,second,carry);
            return first;
        }
        else{ 
            first->data=val;
            second->data=val;
            first->next=rec(first->next,second->next,carry);
            return first;
        }
    }
    
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        first=reverse(first); second=reverse(second);
        // int carry=0;
        // struct Node *ans=NULL,*t=NULL;
        // while(first and second){
        //     carry+=first->data+second->data;
        //     if(ans==NULL) ans=new Node(carry%10),t=ans;
        //     else t->next=new Node(carry%10),t=t->next;
        //     carry/=10;
        //     first=first->next;
        //     second=second->next;
        // }
        // while(first){
        //     carry+=first->data;
        //     t->next=new Node(carry%10);
        //     t=t->next;
        //     carry/=10;
        //     first=first->next;
        // }
        // while(second){
        //     carry+=second->data;
        //     t->next=new Node(carry%10);
        //     t=t->next;
        //     carry/=10;
        //     second=second->next;
        // }
        // if(carry) t->next=new Node(carry);
        // return reverse(ans);
        int carry=0;
        Node *ans=rec(first,second,carry);
        ans=reverse(ans);
        Node* tmp=ans;
        if(carry) tmp=new Node(carry),tmp->next=ans;
        return tmp;
    }
};
