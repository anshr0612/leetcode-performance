class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n=str1.size();
        int m=str2.size();
        if((str1+str2)!=(str2+str1)){
            return "";
        }
        int x=gcd(n,m);
        return str1.substr(0,x);
    }
private:
    int gcd(int a,int b){
        if(b==0)return a;
        else return gcd(b,a%b);
    }
};