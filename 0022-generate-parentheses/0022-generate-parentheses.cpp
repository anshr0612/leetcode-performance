class Solution {
    void dfs(string& bracket,int open,int n,vector<string>& ans){
            if(n==0 && open==0){
                ans.push_back(bracket);
                return;
            }
            if(open){
                bracket +=')';
                dfs(bracket,open-1,n,ans);
                bracket.pop_back();
            }
            if(n){
                bracket +='(';
                dfs(bracket,open+1,n-1,ans);
                bracket.pop_back();
            }
        }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        int open=0;
        string bracket="";
        dfs(bracket,open,n,ans);
        return ans;
    }
};