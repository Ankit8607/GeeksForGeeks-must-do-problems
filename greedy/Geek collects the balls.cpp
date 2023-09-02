// https://practice.geeksforgeeks.org/problems/geek-collects-the-balls5515/1

class Solution{
public:
    int maxBalls(int n, int m, vector<int> a, vector<int> b){
        // code here
        
        // sum_a - max balls with current position on road a at index around i
        // sum_b - max balls with current position on road b at index around j
        int i=0, j=0, sum_a=0, sum_b=0; 
        
        while(i<n && j<m) {
            if(a[i]<b[j]) {
                sum_a+=a[i++];
            }
            else if(b[j]<a[i]) {
                sum_b+=b[j++];
            }
            else {
                int x=a[i], cnt1=0, cnt2=0;
                for(; i<n && x==a[i]; ++i) cnt1++;
                for(; j<m && x==b[j]; ++j) cnt2++;
                
                // a_to_b max balls that can be collected while switching from road a to b
                // ...similarly for b_to_a, a_to_a, b_to_b
                int a_to_b=0, b_to_a=0, a_to_a=0, b_to_b=0;
                if(cnt1==1 && cnt2==1) {
                    a_to_a=x;
                    a_to_b=x;
                    b_to_a=x;
                    b_to_b=x;
                }
                else if(cnt1==1) {
                    a_to_a=x*(cnt2-1);
                    a_to_b=x*cnt2;
                    b_to_a=x*cnt2;
                    b_to_b=x*cnt2;
                }
                else if(cnt2==1) {
                    a_to_a=x*cnt1;
                    a_to_b=x*cnt1;
                    b_to_a=x*cnt1;
                    b_to_b=x*(cnt1-1);
                }
                else {
                    a_to_a=x*(cnt1+cnt2-2);
                    a_to_b=x*(cnt1+cnt2-1);
                    b_to_a=x*(cnt1+cnt2-1);
                    b_to_b=x*(cnt1+cnt2-2);
                }
                
                int sum1=max(sum_a+a_to_a, sum_b+b_to_a), sum2=max(sum_b+b_to_b, sum_a+a_to_b);
                sum_a=sum1;
                sum_b=sum2;
            }
        }
        
        for(; i<n; ++i) sum_a+=a[i];
        for(; j<m; ++j) sum_b+=b[j];
        
        return max(sum_a, sum_b);
    }
};
