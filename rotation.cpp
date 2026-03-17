#include <bits/stdc++.h>
using namespace std;

int main(){
    string s="abcde", goal="cdeab";

    if(s.size()==goal.size() && (s+s).find(goal)!=string::npos)
        cout<<"true";
    else cout<<"false";
}
