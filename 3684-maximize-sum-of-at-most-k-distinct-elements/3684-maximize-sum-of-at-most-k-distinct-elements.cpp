class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int n=nums.size();
        for(int i=n-1;i>=0 && k>0;i--){
            if(ans.empty()||ans.back()!=nums[i]){
                ans.push_back(nums[i]);
                k--;
            }
        }
        return ans;
    }
};