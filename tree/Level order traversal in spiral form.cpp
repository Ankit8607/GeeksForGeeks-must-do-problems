// https://practice.geeksforgeeks.org/problems/level-order-traversal-in-spiral-form/1

vector<int> findSpiral(Node *root)
{
    int t=0;
    queue<Node*>q;
    q.push(root);
    vector<int>ans;
    while(!q.empty()){
        int n=q.size(),tmp=ans.size();
        while(n--){
            Node *head=q.front();
            q.pop();
            ans.push_back(head->data);
            if(head->left) q.push(head->left);
            if(head->right) q.push(head->right);
        }
        if(t==0) reverse(ans.begin()+tmp,ans.end());
        t=1-t;
    }
    return ans;
}
