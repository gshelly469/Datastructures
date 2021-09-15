#include<iostream>

using namespace std;

int minJumps(int arr[], int n){
        
        int count_steps = 0;
        int max_val = 0;
        int max_id = 0;
        int destination_id = 0;
        
        for (int i = 0; i < n; i++){
            if ( i == destination_id ){
                count_steps++;
                
                if (arr[max_id]+max_id > arr[i]+i){
                    destination_id = max_id + arr[max_id];
                }
                else{         
                    destination_id = i + arr[i];
                }
  
                if ( destination_id >= n-1 ){
                    return count_steps;
                }
            }
            if (max_val < i+arr[i]){
                max_val = i+arr[i];
                max_id = i;
            }
        }
        return -1;
    }