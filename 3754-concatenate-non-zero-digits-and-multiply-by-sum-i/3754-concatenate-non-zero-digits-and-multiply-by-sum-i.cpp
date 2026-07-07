class Solution {
public:
    long long sumAndMultiply(int n) {
        vector<int> a;
        long long sum=0;
        while(n>0){
            int x=n%10;
            if(x!=0){
                a.push_back(x);
                sum=sum+x;
            }
            n=n/10;
        }
        reverse(a.begin(),a.end());
        long long b=0;
        for(int x:a){
            b=b*10+x;
        }
        return b*sum;
    }
};