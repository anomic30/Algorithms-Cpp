//Binary Search recursive approach

#include <bits/stdc++.h>

using namespace std;

int binarySearch(int arr[],int l,int r,int val){
	if(r>=l){
		int mid=l+(r-l)/2;
		if(arr[mid]==val){
			return mid;
		}else if(arr[mid]<val){
			return binarySearch(arr,mid+1,r,val);
		}else{
			return binarySearch(arr,l,mid-1,val);
		}
	}
	return -1;
}


int main(){
	
	int n,val;
	cout<<"Enter the length of the array: "<<endl;
	cin>>n;
	
	cout<<"Now enter the array elements: "<<endl;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	cout<<"What element do you want to find? "<<endl;
	cin>>val;
	
	int result=binarySearch(arr,0,n-1,val);
	if(result==-1){
		cout<<"Not found"<<endl;
	}else{
		cout<<"Found at index position: "<<result<<endl;
	}
	
	return 0;
}
