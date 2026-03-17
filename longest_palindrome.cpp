#include <bits/stdc++.h>
using namespace std;

string expand(string s,int l,int r){
    while(l>=0 && r<s.size() && s[l]==s[r]){
        l--; r++;
    }
    return s.substr(l+1, r-l-1);
}

int main(){
    string s="babad", ans="";

    for(int i=0;i<s.size();i++){
        string s1=expand(s,i,i);
        string s2=expand(s,i,i+1);

        if(s1.size()>ans.size()) ans=s1;
        if(s2.size()>ans.size()) ans=s2;
    }

    cout<<ans;
}
