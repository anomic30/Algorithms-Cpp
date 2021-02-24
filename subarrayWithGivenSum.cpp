//Subarray with given sum 
//https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1
//TC=O(n)
#include <bits/stdc++.h>

using namespace std;

int subArraySum(int arr[],int n,int target){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum==target){
            cout<<"Sum found"
        }
    }
}

int main(){
    int arr[] = {1, 4, 0, 0, 3, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;
    subArraySum(arr, n, target);

    return 0;
}

// int subArraySum(int arr[],int n,int sum){
//     int currSum=arr[0],start=0,i;
//     for(int i=1;i<=n;i++){
//         while(currSum>sum && start<i-1){
//             currSum=currSum-arr[start];
//             start++;
//         }
//         if(currSum==sum){
//             cout<<"Sum found between indexes: "
//                 <<start<<" and "<<i-1<<endl;
//                 return 1;
//         }
//         if(i<n){
//             currSum+=arr[i];
//         }
//     }
//     cout<<"No subarray found"<<endl;
//     return 0;
// }

// int main(){
//     int arr[] = {1, 4, 0, 0, 3, 10, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int sum = 7;
//     subArraySum(arr, n, sum);
//     return 0;
// }

//INITIAL APPROACH//TC=O(n^2)
// int main(){
//     int arr[]={1, 4, 0, 0, 3, 10, 5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int s=7,i,j;
//     int sum=0,flag=0,start,end;
//     for(i=0;i<n;i++){
//         sum=arr[i];
//         for(j=i+1;j<=n;j++){
//             if(sum==s){
//                 start=i;
//                 end=j-1;
//                 flag=1;
//                 break;
//             }
//             if(sum>s || j==n){
//                 break;
//             }
//             sum=sum+arr[j];
//         }
//     }
//     if(flag==1){
//         cout<<"Sum found between indexex: "
//             <<start<<" and "<<end<<endl;
//     }else{
//         cout<<"Not found"<<endl;
//     }
    
//     return 0;
// }
