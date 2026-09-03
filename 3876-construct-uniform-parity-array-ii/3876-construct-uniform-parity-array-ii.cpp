class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
       int smallestodd=INT_MAX;
       for(int num:nums1){
        if(num%2!=0){
            smallestodd=min(smallestodd,num);
        }
       } 
       if(smallestodd==INT_MAX)return true;
       for(int num:nums1){
        if(num%2==0 && num<=smallestodd)return false;
       }
       return true;
    }
};