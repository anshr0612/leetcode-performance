class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> res;
        for(int len=2;len<=9;len++){
            int a=0;
            int add=0;
            for(int i=1;i<=len;i++){
                a=a*10+i;
                add=add*10+1;
            }
            while(1){
                if(a>=low && a<=high){
                    res.push_back(a);
                }
                int last=a%10;
                if(last==9){
                    break;
                }
                a=a+add;
            }
        }
        return res;
    }
};