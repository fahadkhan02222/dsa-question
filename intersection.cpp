#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a={1,2,2,1};
    vector<int> b={2,2};

    unordered_set<int> s(a.begin(), a.end());
    unordered_set<int> res;

    for(int x:b)
        if(s.count(x)) res.insert(x);

    for(int x:res) cout<<x<<" ";
}
