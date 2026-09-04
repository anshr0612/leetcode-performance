class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> s(n);
        s[0]=nums[0];
        for(int i=1;i<n;i++){
            s[i]=max(nums[i],s[i-1]);
        }
        int minN=INT_MAX;
        for(int i=n-1;i>=0;--i){
            minN=min(minN,nums[i]);
            s[i]-=minN;
        }
        for(int i=0;i<n;i++){
            if(s[i]<=k)return i;
        }
        return -1;
    }
};