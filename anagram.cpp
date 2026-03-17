#include <bits/stdc++.h>
using namespace std;

int main(){
    string s="listen", t="silent";

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if(s==t) cout<<"true";
    else cout<<"false";
}
