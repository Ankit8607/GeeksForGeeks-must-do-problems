// https://practice.geeksforgeeks.org/problems/binary-tree-to-dll/1

class Solution
{
    
    pair<Node*,Node*> rec(Node *root){
        if(root==NULL) return {root,root};
        
        Node *tmp=new Node(root->data);
        pair<Node*,Node*> l=rec(root->left);
        pair<Node*,Node*> r=rec(root->right);
        if(l.first) l.second->right=tmp;
        if(r.first) r.first->left=tmp;
        tmp->left=l.second;
        tmp->right=r.first;
        
        return {(l.first?l.first:tmp),(r.second?r.second:tmp)};
    }
    
    public: 
    //Function to convert binary tree to doubly linked list and return it.
    Node * bToDLL(Node *root)
    {
        return rec(root).first;
    }
};
