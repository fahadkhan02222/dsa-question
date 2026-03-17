#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={1,3,4,2,2};
    unordered_set<int> s;

    for(int x:arr){
        if(s.count(x)){
            cout<<x;
            break;
        }
        s.insert(x);
    }
}
