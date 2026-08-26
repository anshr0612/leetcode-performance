class Solution {
    bool compare(string s1,string& s2){
        if(s1.length()!=s2.length()){
            return s1.length()<s2.length();
        }
        return s1<s2;
    }
public:
    string shortestBeautifulSubstring(string s, int k) {
        int a=0;
        for(char& ch:s)
            if(ch=='1')
                ++a;
        if(a<k)return "";
        string ans=s;
        a=0;
        int b=0;
        for(int i=0;i<s.length();++i){
            if(s[i]=='1')++a;
            if(a==k){
                while(a==k && s[b]=='0'){
                    ++b;
                }
                string temp=s.substr(b,i-b+1);
                if(compare(temp,ans)){
                    ans=temp;
                }
                while(a==k){
                    if(s[b]=='1')
                        --a;
                    ++b;
                }
            }
        }
        return ans;
    }
};