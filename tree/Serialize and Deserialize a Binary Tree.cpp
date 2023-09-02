// https://practice.geeksforgeeks.org/problems/serialize-and-deserialize-a-binary-tree/1

class Solution
{
    public:
    //Function to serialize a tree and return a list containing nodes of tree.
    vector<int> serialize(Node *root) 
    {
        vector<int>ans;
        queue<Node*>q;
        q.push(root);
        ans.push_back(root->data);
        while(!q.empty()){
            int n=q.size();
            while(n--){
                Node *head=q.front();
                q.pop();
                if(head->left) q.push(head->left), ans.push_back(head->left->data);
                else ans.push_back(0);
                if(head->right) q.push(head->right), ans.push_back(head->right->data);
                else ans.push_back(0);
            }
        }
        return ans;
    }
    
    //Function to deserialize a list and construct the tree.
    Node * deSerialize(vector<int> &arr)
    {
       Node *ans=new Node(arr[0]);
       queue<Node*>q;
       q.push(ans);
       for(int i=1;i<arr.size();i++){
           Node *cur=q.front(); q.pop();
           if(arr[i]==0) cur->left=NULL;
           else{
               cur->left= new Node(arr[i]);
               q.push(cur->left);
           }
           i++;
           if(arr[i]==0) cur->right=NULL;
           else{
               cur->right= new Node(arr[i]);
               q.push(cur->right);
           }
       }
       return ans;
    }

};
