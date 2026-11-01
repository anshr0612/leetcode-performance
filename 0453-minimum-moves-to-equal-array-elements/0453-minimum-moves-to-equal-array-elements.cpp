class Solution {
public:
    int minMoves(vector<int>& nums) {
        int min = INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<min){
                min = nums[i];
            }
        }
        int moves = 0;
        for(int x : nums){
            moves+=(x-min);
        }
        return moves;
    }
};