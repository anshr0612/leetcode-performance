class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        /*Time complexity O(n), space complexity O(1).
        But this contains 2 passes.

        int a=0,b=0,c=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0)a++;
            else if(nums[i]==1)b++;
            else c++;
        }
        for(int i=0;i<n;i++){
        while(a>0){
            nums[i++]=0;
            a--;
        }
        while(b>0){
            nums[i++]=1;
            b--;
        }
        while(c>0){
            nums[i++]=2;
            c--;
        }
        }
        */
        // This contains 1 pass.
        int low=0,mid=0,high=n-1;
        while(mid<=high){
        if(nums[mid]==0){
            swap(nums[mid],nums[low]);
            low++;
            mid++;
        }else if(nums[mid]==1){
            mid++;
        }else if(nums[mid]==2){
            swap(nums[mid],nums[high]);
            high--;
        }
        }
    }
};
