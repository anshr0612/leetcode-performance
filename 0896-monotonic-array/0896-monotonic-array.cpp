class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        bool isinc=true;
        bool isdec=true;
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1])isinc=false;
            if(nums[i]<nums[i+1])isdec=false;
        }
        return (isinc || isdec);
    }
};