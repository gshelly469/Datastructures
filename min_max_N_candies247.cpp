#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> candyStore(int candies[], int N, int K)
{
    // Write Your Code here
    sort(candies, candies + N);
    int i = -1;
    int j = N;
    int min = 0;
    int max = 0;
    while (i<j-1 && i < N-1){
        i++;
        j -= K;
        min += candies[i];
    }
    // cout<<i<<j<<min<<endl;
    i = -1;
    j = N;
    while (i < j-1 && j > 0){
        j--;
        i += K;
        max += candies[j];
    }
    vector <int> arr;
    arr.push_back(min);
    arr.push_back(max);
    return arr;
}

int main(){
    int N = 5;
    int K = 4;
    int array[] = {3, 2, 1, 4, 5};
    vector <int> final_result;

    final_result = candyStore(array, N, K);
    
    for (int i = 0; i < final_result.size(); i++){
        cout<<final_result[i]<<" ";
    }
    return 0;
}