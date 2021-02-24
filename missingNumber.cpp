//Find the missing number

#include <bits/stdc++.h>
#include <chrono>

using namespace std;
using namespace std::chrono; 

int main(){
    int arr[]={1,2,4,6,3,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int total=(n+1)*(n+2)/2;
    for(int i=0;i<n;i++){
        total=total-arr[i];
    }
    //int sum=accumulate(arr,arr+n,0); //we are putting zero means initialy sum was zero
    cout<<"Missing num is: "<<total<<endl;

    return 0;
}



// int main(){
//     int arr[]={1,2,4,6,3,7,8};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     sort(arr,arr+n);
//     int miss=-1;
//     for(int i=0;i<n;i++){
//         if(arr[i]+1 != arr[i+1]){
//             miss=arr[i]+1;
//             break;
//         }
//     }
//     cout<<"Missing number is: "<<miss<<endl;


//     return 0;
// }