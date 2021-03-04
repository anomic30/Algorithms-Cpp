//author: anomic30
/*
Leetcode 62(Unique Paths)
A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).
The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of 
the grid. How many possible unique paths are there?
*/

#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define MOD 1000000007
#define ll long long

int main(){
    IOS;
    int n,m;
    cin>>m>>n;
    long dp[m][n];
    for(int i=0;i<m;i++){ //filling rows
        dp[i][0]=1;
    }
    for(int i=0;i<n;i++){ //filling columns
        dp[0][i]=1;
    }
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            dp[i][j]=dp[i-1][j]+dp[i][j-1]; //adding top cell+left cell
        }
    }
    cout<<dp[m-1][n-1]<<endl; //bottom right cell

    return 0;
}