class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        vector<array<int,3>>a(n);
        int count=0;
        int sum;
        for(int i=0;i<n;i++){
            int x=nums[i];
            sum=0;
           while(x>0){
            sum += x % 10;
            x /= 10;
           } 
           a[i]={sum,nums[i],i};
        }
        sort(a.begin(),a.end());
        vector<bool>visited(n,false);
        for(int i=0;i<n;i++){
            if(visited[i]||a[i][2]==i)continue;
            int j=i,len=0;
            while(!visited[j]){
                visited[j]=true;
                j=a[j][2];
                len++;
            }
            count+=len-1;
        }
        return count;
    }
};