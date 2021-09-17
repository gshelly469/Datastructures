#include<iostream>

using namespace std;

long long maxSubarraySum(int arr[], int n){
        long long max=arr[0];
        long long sum=arr[0];
        for (int i=1; i<n; i++){
            
            if(sum<0 && arr[i]>0  && max<arr[i]){
                max=arr[i];
                sum=arr[i];
            }
            else if (sum<0 && arr[i]>0){
                sum=arr[i];
            }
            else if (sum<0 && arr[i]>max){
                max = arr[i];
            }
            else{
                if (arr[i]+sum>max){
                    max=arr[i]+sum;
                }
                sum+=arr[i];
            }
        }
        // Your code here
        return max;
}