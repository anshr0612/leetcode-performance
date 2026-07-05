class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string ans="";
        sort(s.begin(),s.end());
        int n=s.size();
        string a=s[0],b=s[n-1];
        for(int i=0;i<min(a.size(),b.size());i++){
            if(a[i]!=b[i]){
                return ans;
            }
            ans=ans+a[i];
        }
        return ans;
    }
};