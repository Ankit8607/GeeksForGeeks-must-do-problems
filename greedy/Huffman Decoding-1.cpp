// https://practice.geeksforgeeks.org/problems/huffman-decoding-1/1

void rec(struct MinHeapNode* root, map<string,char>&mp,string s){
    if(root==NULL) return ;
    
    if(root->data!='$') mp[s]={root->data};
    rec(root->left,mp,s+'0');
    rec(root->right,mp,s+'1');
}

string decode_file(struct MinHeapNode* root, string s)
{
    map<string,char>mp;
    rec(root,mp,"");
    string ans,last;
    // for(auto i:mp) cout<<"i.first= "<<i.first<<" i.second= "<<i.second<<endl;
    for(auto i:s){
        last+=i;
        if(mp.count(last)) ans+=mp[last],last="";
    }
    return ans;
}
