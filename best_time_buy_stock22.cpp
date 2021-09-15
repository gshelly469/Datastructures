#include<iostream>
#include<vector>

using namespace std;

int maxProfit(vector<int>& prices) {
        int min=prices[0];
        int diff=0;
        
        for ( int i = 1; i < prices.size(); i++ ){
            if (diff < prices[i]-min && prices[i]-min>0){
                diff = prices[i]-min;
            }
            if (prices[i]<min){
                min = prices[i];
            }
        }
        if (diff == 0){
            return 0;
        }
        return diff;
        
}