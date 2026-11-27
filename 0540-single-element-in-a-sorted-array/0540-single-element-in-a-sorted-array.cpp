class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int a:nums){
            mp[a]++;
        }
        for(auto x:mp){
            if(x.second==1){
                return x.first;
            }
        }
        return -1;
    }
};