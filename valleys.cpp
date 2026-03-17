#include <bits/stdc++.h>
using namespace std;

int main(){
    string s="UDDDUDUU";
    int level=0, valley=0;

    for(char c:s){
        if(c=='U'){
            level++;
            if(level==0) valley++;
        } else level--;
    }

    cout<<valley;
}
