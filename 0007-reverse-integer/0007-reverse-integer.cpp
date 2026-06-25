class Solution {
public:
    int reverse(int x) {
     int n=x;
     long long rev=0;
     while(n!=0){
        int digits=n%10;
        if((rev>INT_MAX/10)||(rev<INT_MIN/10))
        return 0;
        rev=rev*10+digits;
        n=n/10;
     }   
     return rev;
    }
};