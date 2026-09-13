class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n=img1.size();
        vector<pair<int,int>>A,B;
        for(int r=0;r<n;r++){
            for(int c=0;c<n;c++){
                if(img1[r][c]==1)
                    A.push_back({r,c});
                if(img2[r][c]==1)
                    B.push_back({r,c});
                }
            }
            unordered_map<int,int>freq;
            int ans=0;
            for(auto [r1,c1]:A){
                for(auto [r2,c2]:B){
                    int a=r1-r2;
                    int b=c1-c2;
                    int p=a*100+b;
                    freq[p]++;
                    ans=max(ans,freq[p]);
                }
            }
            return ans;
    }
};