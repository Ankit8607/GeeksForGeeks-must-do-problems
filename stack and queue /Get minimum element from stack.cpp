// https://practice.geeksforgeeks.org/problems/get-minimum-element-from-stack/1

class Solution{
    int minEle;
    stack<int> s;
    public:
    
       /*returns min element from stack*/
       int getMin(){
           
           if(s.empty()) return -1;
           return s.top()%101;
       }
       
       /*returns poped element from stack*/
       int pop(){
           
           if(s.empty()) return -1;
           int t=s.top();
           s.pop();
           return t/101;
       }
       
       /*push element x into the stack*/
       void push(int x){
           if(s.empty()) s.push(101*x+x);
           else s.push(101*x+min(x,s.top()%101));
       }
};
