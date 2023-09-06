// https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char>st;
        for(auto i:x){
            if(i=='(' || i=='{' || i=='[') st.push(i);
            else{
                if(st.empty()) return 0;
                char c=st.top(); st.pop();
                if(i==')'){
                    if(c!='(') return 0;
                } 
                if(i=='}'){
                    if(c!='{') return 0;
                } 
                if(i==']'){
                    if(c!='[') return 0;
                } 
            }
        }
        return st.size()==0;
    }

};
