class Solution {
public:
    int reverseDegree(string s) {
        int n=s.size();
        int product=1,sum=0;
        for(int i=0;i<n;i++){
            product=(i+1)*(122-s[i]+1);
            sum=sum+product;
        }
        return sum;
    }
};