
#include <bits/stdc++.h>
using namespace std;

int main(){
    int m;
    cin>>m;

    if(m<1 || m>12) cout<<"Invalid Month Entered";
    else if(m>=3 && m<=5) cout<<"Spring";
    else if(m>=6 && m<=8) cout<<"Summer";
    else if(m>=9 && m<=11) cout<<"Autumn";
    else cout<<"Winter";
}
