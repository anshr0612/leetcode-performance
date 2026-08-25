class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
      unordered_set<int>s(nums.begin(),nums.end());
      int n=k;
      while(s.count(n)){
        n+=k;
      }
      return n;  
    }
};