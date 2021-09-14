#include<vector>
#include<iostream>

using namespace std;

vector<int> find(int arr[], int n , int x )
{
    
    vector<int> output;
    bool first_flag = false;
    
    for (int i = 0; i < n; i++){
        if (arr[i] == x & first_flag == false){
            output.push_back(i);
            first_flag = true;
        }
        
        if ( first_flag == true & arr[i] == x & arr[i+1] != x & i < n-1){
            output.push_back(i);
        }
        else if (first_flag == true & arr[i] == x  & i == n-1){
            output.push_back(i);
        }
    }
    if (first_flag == false){
        output.push_back(-1);
        output.push_back(-1);
        return output;
    }
    return output;
    // code here
}

