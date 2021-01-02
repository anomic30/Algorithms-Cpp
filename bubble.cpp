//Simple bubble sort by Anom.

#include <stdio.h>


void bubbleSort(int arr[],int n){  //Function for bubble sort.
	
	int i,j,temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
			if(arr[j]>arr[j+1]){  //Ascending order
				temp= arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

void printArray(int arr[],int n){  //Function for printing the array.
	int i;
	for(i=0;i<n;i++){
		printf("%d,",arr[i]);
	}
}
int main(){
	
	int arr[]={27,89,61,11,35,121,78,99,100};
	int n=sizeof(arr)/sizeof(arr[0]); //Calculating the size of array.
	printf("The number of elements are %d\n",n);
	bubbleSort(arr,n);
	printf("Sorted array: \t"); 
	printArray(arr,n);
	
	return 0;
}
