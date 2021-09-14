#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int editDistance(string s, string t) {

    

        if (s.size()>t.size()){
            for (int i = 0; i < t.size()-1; i++){
                bool match = false;

                for (int j=0; j < s.size()-1-(t.size()-i+1); j++){
                    if (t[i] == s[j]){
                        match = true;
                        break;
                    }
                }

            }
        }
        else if (s.size()<t.size()){

        }
        else{
            return s.size();
        }
}

int main(){

}