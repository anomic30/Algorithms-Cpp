//Search an element in a sorted and rotated array
//https://www.geeksforgeeks.org/search-an-element-in-a-sorted-and-pivoted-array/
#include <bits/stdc++.h>

using namespace std;

int main(){
	int key;
	cin>>key;
	int arr[]={5, 6, 7, 8, 9, 10, 11, 1, 2, 3, 4};
	int n=sizeof(arr)/sizeof(arr[0]);
	if(arr[n-1]>arr[0]){
		bool present=binary_search(arr,arr+n,key);
		if(present){
			cout<<"present"<<endl;
		}else{
			cout<<"not present"<<endl;
		}
	}else{
		int pivot=-1;
		for(int i=0;i<n;i++){
			if(!(arr[i]>arr[i-1] && arr[i]<arr[i+1])){
				pivot=i;	
			}
		}
		bool a = binary_search(arr,arr+pivot,key);
		bool b = binary_search(arr+pivot,arr+n,key);
	
		if(a || b){
			cout<<"present"<<endl;
		}else{
			cout<<"not present"<<endl;
		}	
	}
	
	
	return 0;
}
