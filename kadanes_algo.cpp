#include <iostream>
using namespace std;

int max_sum(int arr[], int size, int max, int sum, int i = 0){
    if (i+1 == size){
        return max;
    }

    sum += arr[i];

    if (sum > max ){
        max = sum;
    }

    if (sum<=0){
        sum = 0;
    }

    i++;
    return max_sum(arr, size, max, sum, i);
}

int main(){

    cout << "Hello World" << endl;
    int arr[]={-2, -3, 4, -1, -2, 1, 5, -3};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    for (int i=0; i<size; i++){
        cout<<i;
    }
    cout<<endl;
    int result = max_sum(arr, size, 0, 0, 0);
    cout<<result;

}