// https://practice.geeksforgeeks.org/problems/print-a-binary-tree-in-vertical-order/1

class Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
        queue<pair<Node*,int>>q;
        q.push({root,0});
        map<int,vector<int>>mp;
        while(!q.empty()){
            Node* head=q.front().first;
            int val=q.front().second;
            q.pop();
            mp[val].push_back(head->data);
            if(head->left) q.push({head->left,val-1});
            if(head->right) q.push({head->right,val+1});
        }
        vector<int>ans;
        for(auto i:mp) for(auto j:i.second) ans.push_back(j);
        return ans;
    }
};
