#include<iostream>
using namespace std;
int main(){
	int arr[6]={1,10,7,6,14,9};
	int n=6;
	for(int i=1;i<n;i++){
		int temp =arr[i];
		int j=i-1;
		for(;j>=0;j--){
			if(arr[j]<temp){
				//shift
				arr[j+1]=arr[j];
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
