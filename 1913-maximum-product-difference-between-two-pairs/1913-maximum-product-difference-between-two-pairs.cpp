class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int n=nums.size();
        int firstmax=0,secondmax=0,firstmin=INT_MAX,secondmin=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]>firstmax){
                secondmax=firstmax;
                firstmax=nums[i];
            }else if(nums[i]>secondmax){
                secondmax=nums[i];
            }
            if(nums[i]<firstmin){
                secondmin=firstmin;
                firstmin=nums[i];
            }else if(nums[i]<secondmin){
                secondmin=nums[i];
            }
        }
        return (firstmax*secondmax)-(firstmin*secondmin);
    }
};