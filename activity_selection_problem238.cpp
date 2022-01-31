#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

static bool comp(pair<int, int> a , pair<int, int> b ){
    if (a.second == b.second){
        return a.first<b.first;
    }
    return a.second<b.second;
    
}

int maxMeetings(int start[], int end[], int n)
{
    // Your code here
    vector <pair<int, int>> pair_arr(n);
    for( int i = 0; i<n; i++){
        pair_arr[i] = {start[i],end[i]};
    }
    
    sort(pair_arr.begin(), pair_arr.end(), comp);
    
    int i=0;
    int j=1;
    int count=1;
    
            
    while(j<n){
        if (pair_arr[i].second<pair_arr[j].first){
            count++;
            i=j;
            j++;
        }
        else{
            j++;
        }
    }
// NEW BRANCH 
    return count;
}

