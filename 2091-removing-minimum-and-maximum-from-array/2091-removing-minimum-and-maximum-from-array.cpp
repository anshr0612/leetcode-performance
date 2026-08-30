class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int a=0,b=0;
        for(int i=0;i<n;i++){
            if(nums[a]>nums[i])a=i;
            if(nums[b]<nums[i])b=i;
        }
        int p=0,q=0,r=0;
        for(int i=0;i<=max(a,b);i++){
            p++;
        }
        for(int i=min(a,b);i<n;i++){
            q++;
        }
        for(int i=min(a,b)+1;i<max(a,b);i++){
            r++;
        }
        return min(p,min(q,n-r));
    }
};