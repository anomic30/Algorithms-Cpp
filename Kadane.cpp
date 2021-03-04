//Kadanes algorithm(works for both negative and positive elements)
//Longest sum contiguous subarray
#include <bits/stdc++.h>

using namespace std;

int solve(int arr[],int n){
    int meh=0,msf=INT_MIN; //meh=max ending here; msf=max so far
    for(int i=0;i<n;i++){
        meh=meh+arr[i];
        if(meh<arr[i]){
            meh=arr[i];
        }
        if(msf<meh){
            msf=meh;
        }
    }
    return msf;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<solve(arr,n)<<endl;

    return 0;
}