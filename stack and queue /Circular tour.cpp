// https://practice.geeksforgeeks.org/problems/circular-tour-1587115620/1

class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       int last=0,sum=0;
       for(int i=0;i<n;i++){
           sum+=p[i].petrol;
           if(sum<p[i].distance){
               last=i+1;
               sum=0;
           }
           else sum-=p[i].distance;
       }
       if(last==n) return -1;
       if(last==0) return 0;
       for(int i=0;i<last;i++){
           sum+=p[i].petrol;
           if(sum<p[i].distance) return -1;
           else sum-=p[i].distance;
       }
       return last;
    }
};
