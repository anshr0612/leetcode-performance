class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        if(num==0)return true;
        for(int i=num/2;i<num;i++){
            int mid=i;
            int n=i;
            int rev=0;
            while(n){
                rev=rev*10+n%10;
                n=n/10;
            }
            if((i+rev)==num){
                return true;
            }
        }
        return false;
    }
};