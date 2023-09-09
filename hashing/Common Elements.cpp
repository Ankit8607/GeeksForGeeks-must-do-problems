// https://practice.geeksforgeeks.org/problems/common-elements5420/1

class Solution{
    public:
        vector<int> common_element(vector<int>v1,vector<int>v2)
    {
        vector<int>ans;
            map<int,int>mp;
            for(auto it:v1)mp[it]++;
            
            for(auto it: v2){
                if(mp[it]){
                    ans.push_back(it);
                    mp[it]--;
                }
            }
            sort(ans.begin(),ans.end());
            return ans;

    }
};
