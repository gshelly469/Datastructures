#include<iostream>
#include<vector>

using namespace std;

vector<int> factorial(int N){
        // code here
        int carry=0, once=0, mult=0;
        vector<int> arr;
        vector<int> final;
        arr.push_back(1);
        
        for (int i=2; i<=N; i++){
            int n=arr.size();
            carry=0;
            for(int j=0; j<n; j++){
                mult = i*arr[j] + carry;
                once = mult%10;
                arr[j] = once;
                carry = mult/10;

                if(j==n-1 && carry != 0){
                    if (carry>10){
                    while(carry>10){
                        once=carry%10;
                        arr.push_back(once);
                        carry=carry/10;
                    }
                    arr.push_back(carry);
                    }
                    else{
                        arr.push_back(carry);
                    }
                }
            }
        }
        
    for ( int i=arr.size()-1; i>=0; i--){
        final.push_back(arr[i]);
    }
    return final;
}