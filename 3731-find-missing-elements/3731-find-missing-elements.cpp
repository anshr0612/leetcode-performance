class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int min_ele=*min_element(nums.begin(),nums.end());
        int max_ele=*max_element(nums.begin(),nums.end());
        vector<bool> exists(max_ele-min_ele+1);
        for(int& i:nums)exists[i-min_ele]=true;
        vector<int> ans;
        for(int i=0;i<max_ele-min_ele;++i){
            if(!exists[i])
            ans.push_back(i+min_ele);
        }
        return ans;
    }
};