class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int a;
        int max=0;
        for(int i=0;i<n;i++){
            if(max<arr[i]){
                max=arr[i];
                a=i;
            }
        }
        return a;
    }
};