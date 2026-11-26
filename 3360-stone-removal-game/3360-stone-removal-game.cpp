class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10)return false;
        if(n==10)return true;
        n=n-10;
        int flag=1;
        int a=9;
        while(n>=0){
            n=n-a;
            if(n>=0)
                flag=!flag;
            a--;
        }
        return flag;
    }
};