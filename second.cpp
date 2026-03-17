#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1,2,4,7,7,5};
    sort(arr.begin(), arr.end());

    int n=arr.size();
    int small=-1, large=-1;

    for(int i=1;i<n;i++)
        if(arr[i]!=arr[0]) { small=arr[i]; break; }

    for(int i=n-2;i>=0;i--)
        if(arr[i]!=arr[n-1]) { large=arr[i]; break; }

    cout<<"Second Smallest: "<<small<<"\n";
    cout<<"Second Largest: "<<large;
}
