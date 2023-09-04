// https://practice.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1

class Solution{
  public:
    //Function to check whether the list is palindrome.
    
    bool rec(Node *head,Node *(&tmp)){
        if(head==NULL) return 1;
       
        bool ans=rec(head->next,tmp);
        ans&=(head->data==tmp->data),tmp=tmp->next;
        
        return ans;
    }
    
    bool isPalindrome(Node *head)
    {
        Node *tmp=head;
        return rec(head,tmp);
    }
};
