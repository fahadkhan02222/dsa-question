#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums={2,2,1,1,1,2,2};
    int count=0, candidate;

    for(int x:nums){
        if(count==0) candidate=x;
        count += (x==candidate)?1:-1;
    }

    cout<<candidate;
}
