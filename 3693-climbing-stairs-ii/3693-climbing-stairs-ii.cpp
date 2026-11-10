class Solution {
public:
    int climbStairs(int n, vector<int>& cost) {
        vector<int>a(n+1,0);
        a[0]=0;
        for(int i=0;i<n;i++){
            int step=INT_MAX;
            if(i==0){
                step=1+cost[i];
            }else if(i==1){
                step=cost[i]+min(4,1+a[i]);
            }else{
                step=cost[i]+min({1+a[i],4+a[i-1],9+a[i-2]});
            }
            a[i+1]=step;
        }
        return a[n];
    }
};