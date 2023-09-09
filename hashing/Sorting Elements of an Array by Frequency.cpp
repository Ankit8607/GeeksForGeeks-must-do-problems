// https://practice.geeksforgeeks.org/problems/sorting-elements-of-an-array-by-frequency/0

#include <bits/stdc++.h>
using namespace std;

map<int,int>mp;
bool comp(int &a,int &b){
    if(mp[a]==mp[b]) return a<b;
    return mp[a]>mp[b];
}

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	   mp.clear();
	   vector<int>ans(n);
	   for(int &i:ans) cin>>i,mp[i]++;
	   sort(ans.begin(),ans.end(),comp);
	   for(auto i: ans) cout<<i<<" "; cout<<endl;
	}
	return 0;
}
