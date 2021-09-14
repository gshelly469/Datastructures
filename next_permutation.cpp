#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> nextPermutation(int N, vector<int> arr){
        // code here
        // vector<int> arr1 = {3,2,1};
        // N=3;
        int last_val = arr[N-1];
        int replacement_index = -1;
        vector<int> sort_arr;
        
        for ( int i = N-2; i>=0; i-- ){
            sort_arr.push_back(arr[i]);
            if (arr[i]<last_val){
                replacement_index = i;
                break;
            }
        }
        
        sort(sort_arr.begin(), sort_arr.end());
        
        vector<int> final_arr;
        // cout<<replacement_index<<last_val;
        if (replacement_index == -1){
            for (int i=N-1; i>=0; i--){
                final_arr.push_back(arr[i]);
            }
        }
        
        else{
            
            for (int i=0; i<replacement_index; i++){
                    final_arr.push_back(arr[i]);
            }
            
            final_arr.push_back(last_val);
            
            for (int j=0; j<sort_arr.size();j++){
                final_arr.push_back(sort_arr[j]);
            }
               
        }
        // for (int i=0; i<N; i++){
        //     cout<<final_arr[i];
        // }
        return final_arr;
}

int main(){


}