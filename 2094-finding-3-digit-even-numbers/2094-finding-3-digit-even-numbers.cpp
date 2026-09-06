class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
      vector<int>ans;
      int freq[15]={};
      for(int d:digits){
        freq[d]++;
      }
      for(int i=1;i<=9;i++){
        for(int j=0;j<=9;j++){
            for(int k=0;k<=8;k+=2){
                freq[i]--;
                freq[j]--;
                freq[k]--;
                if(freq[i]>=0 && freq[j]>=0 && freq[k]>=0){
                    int num=i*100+j*10+k;
                    ans.push_back(num);
                }
                freq[i]++;
                freq[j]++;
                freq[k]++;
         }
        }
      }
      return ans;
    }
};