#include <bits/stdc++.h>

using namespace std;

void combinationSum4(vector<int>& nums, int target) {
        int n=nums.size();
        vector<unsigned int>dp(target+1,0);//single dp 
        dp[0]=1;
        for(int i=1;i<target+1;i++){
            for(auto curr:nums){
                if(curr <= i)
                    dp[i] += dp[i-curr];
            }
        }
        cout<<dp[target]<<endl;
        for(auto i :dp){
            cout<<i<<" ";
        }
}

int main(){
    vector<int> nums={1,2,3};
    combinationSum4(nums,4);
}

