// https://practice.geeksforgeeks.org/problems/determine-if-two-trees-are-identical/1

class Solution
{
    public:
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
        if(r1==NULL and r2==NULL) return 1;
        if(r1==NULL || r2==NULL) return 0;
        return (r1->data == r2->data) & isIdentical(r1->left,r2->left) & isIdentical(r1->right,r2->right);
    }
};
