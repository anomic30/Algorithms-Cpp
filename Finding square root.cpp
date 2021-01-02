#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	cout<<"Enter the number: "<<endl;
	cin>>n;
	int l=0,r=n;
	while(l<=r){
		int mid=l+(r-l)/2;
		if(mid*mid==n){
			cout<<"Its a squared num and root is: "<<mid<<endl;
			break;
		}else if(mid*mid<n){
			l=mid+1;
		}else{
			r=mid-1;
		}
	}
	return 0;
}
