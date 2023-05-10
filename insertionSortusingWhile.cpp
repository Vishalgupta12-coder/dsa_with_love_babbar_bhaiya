#include<iostream>
using namespace std;
int main(){
	int arr[15]={1,10,7,6,14,9,45,21,89,11,565,78,45,15,32};
	int n=15;
	for(int i=1;i<n;i++){
		int temp =arr[i];
		int j=i-1;
		while(j>=0){
			if(arr[j]<temp){
				//shift
				arr[j+1]=arr[j];
				j--;
			}
			else{
				break;
			}
		}
		arr[j+1]=temp;	
	}
	cout<<"sorted array is : "<<endl;
	while(n>0){
		cout<<arr[n-1]<<" ";
		n--;
	}
}
