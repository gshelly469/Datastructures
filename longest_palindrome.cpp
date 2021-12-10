#include<iostream>
#include<string>

using namespace std;

int len_string(string S, bool cas, int i){
        int count=0;
        int first = i-1;
        int mid = i;
        int second = i+1;
        while(cas){
            if (second<S.size()-1 && mid>=0){
                if (S[mid]==S[second]){
                    count++;
                    mid--;
                    second++;
                }
                else{
                    break;
                }
            }
        }
        
        while(!cas){
            if (second<S.size()-1 && first>=0){
                if (S[first]==S[second]){
                    count++;
                    first--;
                    second++;
                }
                else{
                    break;
                }
            }
        }
        if (!cas){
            count++;
        }
        return count;
}
string longestPalin (string S) {
        // code here
        int max_val = 0, max=0;
        string max_str, str;
        // bool cas = true;
        for ( int i=0; i<=S.size()-2; i++){
            if (S[i]==S[i+1]){
                max_val = len_string(S, true, i);
                for (int j = i+1-max_val; j<=i+max_val;j++)
                {
                    str.push_back(S[j]);
                }
            }
            else{
                max_val = len_string(S, false, i);
                for (int j = i-max_val; j<=i+max_val;j++)
                {
                    str.push_back(S[j]);
                }
            }
            // max_val = len_string(S, 0, i);
            if (max_val > max){
                max = max_val;
                max_str = str;
            }
        }
        return max_str;
}

int main(){
    
    string hel = "aaaabbaa";
    string final_str;
    final_str = longestPalin(hel);
    for (int in=0; in<final_str; in++){
        cout<<final_str[in];
    }
}