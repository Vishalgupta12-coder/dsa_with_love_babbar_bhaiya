#include<iostream>
using namespace std;
void selectionSort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		int minIndex=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]< arr[minIndex]){
				minIndex=j;
			}	
		}
		swap(arr[minIndex],arr[i]);
	}	
}
int main(){
	int arr[6]={235,12,24,45,13,0};
	int n=6;
selectionSort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
	
}
