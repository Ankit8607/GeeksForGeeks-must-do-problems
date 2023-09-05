// https://practice.geeksforgeeks.org/problems/implement-atoi/1

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        int sum = 0;
        int start = 0;
        bool a = false;
        if (str[0] == '-') {
            start = 1;
            a = true;
        }
        for(int i = start; i<str.size();i++){
            if(isdigit(str[i])){
            sum = sum* 10 + (str[i]-'0');
            }
            else{
                return -1;
            }
        }
        if(a == true){
            return -sum;
        }
        return sum;
    }
};
