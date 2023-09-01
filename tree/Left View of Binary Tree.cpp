// https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1

void rec(Node *root, vector<int>&ans, int dep){
    if(root==NULL) return ;
    
    if(ans.size()<=dep) ans.push_back(root->data);
    rec(root->left,ans,dep+1);
    rec(root->right,ans,dep+1);
}

//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{
   vector<int>ans;
   rec(root, ans,0);
   return ans;
}
