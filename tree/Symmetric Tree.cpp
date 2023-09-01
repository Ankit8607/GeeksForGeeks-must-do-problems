// https://practice.geeksforgeeks.org/problems/symmetric-tree/1

class Solution{
    
    bool rec(Node *a, Node *b){
        if(a==NULL and b==NULL) return 1;
        
        if(a==NULL || b==NULL) return 0;
        
        return (a->data==b->data) & rec(a->left,b->right) & rec(a->right,b->left);
    }
    
    public:
    // return true/false denoting whether the tree is Symmetric or not
    bool isSymmetric(struct Node* root)
    {
	    return rec(root,root);
    }
};
