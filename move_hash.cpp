#include <bits/stdc++.h>
using namespace std;

int main(){
    string s="Move#Hash#to#Front";
    string res="", hash="";

    for(char c:s){
        if(c=='#') hash += c;
        else res += c;
    }

    cout<<hash + res;
}
