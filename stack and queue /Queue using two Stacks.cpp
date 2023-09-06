// https://practice.geeksforgeeks.org/problems/queue-using-two-stacks/1

void StackQueue :: push(int x)
{
    s1.push(x);
}

//Function to pop an element from queue by using 2 stacks.
int StackQueue :: pop()
{
    if(s1.empty() and s2.empty()) return -1;
    int ans;
    if(!s2.empty()){ 
        ans=s2.top();
        s2.pop();
        return ans;
    }
    while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
    }
    ans=s2.top();
    s2.pop();
    return ans;
}
