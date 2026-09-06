class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n!=m)return false;
        unordered_map<char,char>mp;
        unordered_set<char>mapped;
        for(int i=0;i<n;i++){
            if(!mp.count(s[i])){
                if(mapped.count(t[i]))return false;
                mp[s[i]]=t[i];
                mapped.insert(t[i]);
            }else{
                if(mp[s[i]]!=t[i])return false;
            }
        }
        return true;
    }
};