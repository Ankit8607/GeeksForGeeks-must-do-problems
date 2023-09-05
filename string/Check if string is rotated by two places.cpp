// https://practice.geeksforgeeks.org/problems/check-if-string-is-rotated-by-two-places-1587115620/1

class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        if(str1.size()!=str2.size())  return false;
        int j=0,n=str2.size(),left=1,right=1;
        //check for left rotatated string
        for(int i=0;i<n;i++){
            if(str1[(i+2)%n]!=str2[i]) {
                left = 0;
            }
            
        }
        //check for right rotatated string
        for(int i=0;i<n;i++){
            if(str1[i]!=str2[(i+2)%n]) {
                right = 0;
            }
        }
        //if left or right any of them is matching,return
        return left || right;
    }

};
