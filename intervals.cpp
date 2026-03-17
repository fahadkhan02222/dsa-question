
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> arr={{1,3},{2,6},{8,10},{15,18}};
    sort(arr.begin(), arr.end());

    vector<vector<int>> res;
    res.push_back(arr[0]);

    for(int i=1;i<arr.size();i++){
        if(arr[i][0] <= res.back()[1])
            res.back()[1] = max(res.back()[1], arr[i][1]);
        else
            res.push_back(arr[i]);
    }

    for(auto x:res)
        cout<<"["<<x[0]<<","<<x[1]<<"] ";
}
