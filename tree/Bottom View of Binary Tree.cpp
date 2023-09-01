// https://practice.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1

class Solution {
  public:
  
    void rec(Node* root, map<int,pair<int,int>>&mp, int val,int dep){
        if(root==NULL) return;
        
        if(mp.count(val)){ if(mp[val].first<=dep) mp[val]={dep,root->data};}
        else mp[val]={dep,root->data};
        // cout<<"val= "<<val<<" dep= "<<dep<<endl;
        rec(root->left,mp,val-1,dep+1);
        rec(root->right,mp,val+1,dep+1);
    }
  
    vector <int> bottomView(Node *root) {
        map<int,pair<int,int>>mp;
        rec(root,mp,0,0);
        vector<int>ans;
        for(auto i:mp) ans.push_back(i.second.second);
        return ans;
    }
};
