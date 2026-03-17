#include <bits/stdc++.h>
using namespace std;

int main(){
    string s="aabbbbeeeeffggg";
    string res="";
    int count=1;

    for(int i=1;i<=s.size();i++){
        if(i<s.size() && s[i]==s[i-1]) count++;
        else{
            res += s[i-1] + to_string(count);
            count=1;
        }
    }

    cout<<res;
}
