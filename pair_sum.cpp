#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={1,5,7,-1,5};
    int k=6;
    unordered_map<int,int> mp;
    int count=0;

    for(int x:arr){
        count += mp[k-x];
        mp[x]++;
    }

    cout<<count;
}
