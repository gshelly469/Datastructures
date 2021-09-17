#include<iostream>

using namespace std;

long long trappingWater(int arr[], int n){
        // code here
        long long water=0;
        long long cups=0;
        int max=arr[0];
        // int prev=-1;
        bool decr=false;
        
        for ( int i=1; i<n; i++){
            if(arr[i] >= max){
                max = arr[i];
                water += cups;
                cups=0;
            }
            else{
                cups += max-arr[i];
            }
        }
        cups=0;
        max = arr[n-1];
        for ( int i=n-2; i>=0; i--){
            if(arr[i] > max){
                max = arr[i];
                water += cups;
                cups=0;
            }
            else{
                cups += max-arr[i];
            }
        }
        
        return water;
}
