#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> v={"flower","flow","flight"};
    string prefix=v[0];

    for(int i=1;i<v.size();i++){
        while(v[i].find(prefix)!=0){
            prefix = prefix.substr(0, prefix.size()-1);
        }
    }

    cout<<prefix;
}
