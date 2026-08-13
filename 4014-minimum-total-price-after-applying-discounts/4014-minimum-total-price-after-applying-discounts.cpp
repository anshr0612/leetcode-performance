class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        int n=prices.size();
        int m=discounts.size();
        sort(prices.begin(),prices.end());
        sort(discounts.begin(),discounts.end());
        double sum=0;
        for(int i=n-1,j=m-1;i>-1;--i){
            double dis=0;
            double price=prices[i];
            if(j>=0){
            double dis=price*(discounts[j]/100.0f);
            price=price-dis;
            --j;
            }
            sum+=price;
        }
        return sum;
    }
};