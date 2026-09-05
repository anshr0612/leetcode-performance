class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>s(n);
        s[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            s[i]=min(s[i+1],nums[i]);
        }
        int maxN=0;
        for(int i=0;i<n;i++){
            maxN=max(maxN,nums[i]);
            if(maxN-s[i]<=k)return i;
        }
        return -1;
    }
};