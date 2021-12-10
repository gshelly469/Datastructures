#include<iostream>
#include<string>
#include<stack>
#include<vector>

using namespace std;

int main(){
    string initial = "aaaabbaa";
    stack<char> first;
    vector<char> second;

    vector<char> str;

    for (int i =0; i<initial.size(); i++){

        // while (!first.empty())
        if (!first.empty()){
            if (first.top() == initial[i])
            {
                second.push_back(first.top());
                first.pop();
            }
            else
            {
                string temp;
                if (second.size()!=0){
                    for ( int i=0; i<second.size(); i++){
                        first.push(second[i]);
                        temp.push_back(second[i]);
                    }
                    for (int i = second.size(); i>=0; i--){
                        first.push(second[i]);
                        temp.push_back(second[i]);
                    }
                    second.clear();
                }
            }
            if (second.size()>str.size()){
                str = second;
            }
        }
        
        if (first.top() == initial[i]){

        }
        first.push(initial[i]);

    }

    return 0;
}