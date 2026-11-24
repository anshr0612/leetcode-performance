class Solution {
public:
    int maxLength(vector<int>& nums) {
        int a=2,i=0,product=1;
        for(int j=0;j<ssize(nums);++j){
            int x=nums[j];
            while(gcd(product,x)>1)
                product/=nums[i++];
            product*=x;
            a=max(a,j-i+1);
        }
        return a;
    }
};