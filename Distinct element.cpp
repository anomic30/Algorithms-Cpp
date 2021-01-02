#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n,val;
	cout<<"Enter the length of the array: "<<endl;
	cin>>n;
	
	cout<<"Now enter the array elements: "<<endl;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	vector<int> res;
	int count=0,i,j;
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			if(arr[i]==arr[j]){
				break;
			}
		}
		if(i==j){
			res.push_back(arr[j]);
			count++;
		}
	}
	cout<<"There are "<<count<<" distinct elements."<<endl;
	for(int i=0;i<res.size();i++){
		cout<<res[i]<<",";
	}
	return 0;
}
