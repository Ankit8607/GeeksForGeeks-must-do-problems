// https://practice.geeksforgeeks.org/problems/longest-common-prefix-in-an-array5129/1

class Solution{
  public:
    
    class node{
        public:
        int n=0;
        node *arr[26]={NULL};
    };
    
    void build(node *root,string &s){
        node *cur=root;
        for(auto i:s){
            if(cur->arr[i-'a']==NULL) cur->arr[i-'a']=new node();
            cur=cur->arr[i-'a'];
            cur->n++;
        }
    }
    
    string rec(node *root,int N){
        if(root==NULL) return "";
        
        int cnt=0,tmp;
        for(int i=0;i<26;i++){
            if(root->arr[i]!=NULL) cnt++,tmp=i;
        }
        if(cnt!=1) return "";
        if(root->arr[tmp]->n!=N) return "";
        string ans="a"; ans[0]=ans[0]+tmp;
        ans+=rec(root->arr[tmp],N);
        return ans;
    }
    
    string longestCommonPrefix (string arr[], int N)
    {
        node *root=new node();
        for(int i=0;i<N;i++) build(root,arr[i]);
        string ans=rec(root,N);
        return ans.size()>0?ans:"-1";
    }
};
