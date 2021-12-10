#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main(){
    string x="({}[])";
    stack<char> st;

    for (int i=0; i<x.size(); i++){
        if(x[i]=='{' || x[i]=='(' || x[i]=='['){
            st.push(x[i]);
        }
        else{
            if ( (st.top()=='{' && x[i]=='}') || (st.top()=='(' && x[i]==')') || (st.top()=='[' && x[i]==']')){
                st.pop();
            }
            else{
                cout<<0;
            }
        }
    }
    if (!st.empty()){
        cout<<0;
    }
    cout<<1;
    return 0;
}