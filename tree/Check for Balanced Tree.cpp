// https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1

int rec(Node *root){
    if(root==NULL) return 0;
        
    int l=rec(root->left);
    int r=rec(root->right);
    if((l==0 and root->left!=NULL) || (r==0 and root->right!=NULL)) return 0;
    if(abs(l-r)>1) return 0;
    return 1+max(l,r);
}

class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        return rec(root);
    }
};
