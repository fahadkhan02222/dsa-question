#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums={2,3,-2,4};
    int maxP=nums[0], minP=nums[0], ans=nums[0];

    for(int i=1;i<nums.size();i++){
        if(nums[i]<0) swap(maxP,minP);

        maxP=max(nums[i], maxP*nums[i]);
        minP=min(nums[i], minP*nums[i]);

        ans=max(ans,maxP);
    }

    cout<<ans;
}
