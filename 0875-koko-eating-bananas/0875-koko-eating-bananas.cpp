class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
       int low=1,high=*max_element(piles.begin(),piles.end());
       while(low<high){
        int hours=0;
        int mid=low+(high-low)/2;
        for(int x:piles){
            hours+=(x+mid-1)/mid;
        }
        if(hours<=h)high=mid;
        else low=mid+1;
       } 
       return low;
    }
};