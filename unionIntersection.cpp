//Union and Intersection
//TC=O(n+m)
#include <bits/stdc++.h>

using namespace std;

void printUnion(int arr1[],int arr2[],int m,int n){
    int i=0,j=0;
    vector<int> arr;
    cout<<"The union is as follows- "<<endl;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
        }else if(arr2[j]<arr1[i]){
            cout<<arr2[j]<<" ";
            j++;
        }else{
            cout<<arr2[j]<<" ";
            arr.push_back(arr2[j]);
            j++;
            i++;
        }
    }
    while(i<m){
        cout<<arr1[i]<<" ";
        i++;
    }
    while(j<n){
        cout<<arr2[j]<<" ";
        j++;
    }
    cout<<endl;
    cout<<"The intersection is as follows- "<<endl;
    for(auto k:arr){
        cout<<k<<" ";
    }
}

int main(){
    int arr1[]={1,2,4,5,6};
    int arr2[]={2,3,5,7};
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int n=sizeof(arr2)/sizeof(arr2[0]);
    printUnion(arr1,arr2,m,n);

    return 0;
}