class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        // unordered_map<int,int> mp;
        // for(int i=0;i<n;i++){
        //     mp[nums[i]]++;
        // }
        // for(int i=0;i<n;i++){
        //     if(mp[nums[i]]>1){
        //         ans.push_back(nums[i]);
        //         mp[nums[i]]=0;
        //     }
        // }
        for(int i=0;i<n;i++){
            int value=abs(nums[i]);
            if(nums[value-1]<0){
                ans.push_back(value);
            }else{
                nums[value-1]=-nums[value-1];
            }
        }
        return ans;
    }
};