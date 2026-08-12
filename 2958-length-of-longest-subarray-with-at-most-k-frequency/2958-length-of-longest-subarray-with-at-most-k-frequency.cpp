class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        int left=0;
        int maxlen=0;
        for(int i=0;i<nums.size();i++){
            ++freq[nums[i]];
            while(freq[nums[i]]>k){
                --freq[nums[left]];
                ++left;
            }
            maxlen=max(maxlen,i-left+1);
        }
        return maxlen;
    }
};