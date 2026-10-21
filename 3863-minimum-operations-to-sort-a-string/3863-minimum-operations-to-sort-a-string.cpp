class Solution {
public:
    int minOperations(string s) {
        int n=s.size();
        int min=s[0];
        int max=s[0];
        bool sorted=true;
        for(int i=1;i<n;i++){
            if(s[i]<s[i-1])sorted=false;
            if(s[i]<min)min=s[i];
            if(s[i]>max)max=s[i];
        }
        if(sorted)return 0;
        if(n==2)return -1;
        if(s[0]==min || s[n-1]==max)return 1;
        for(int i=1;i<n-1;i++){
            if(s[i]==min || s[i]==max)return 2;
        }
        return 3;
    }
};