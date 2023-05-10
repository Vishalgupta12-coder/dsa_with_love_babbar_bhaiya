#include<iostream>
using namespace std;
int main(){
	int arr[6]={1,10,7,6,14,9};
	int n=6;
	for(int i=0;i<n;i++){
		bool swapped=false;
		for(int j=0;j<n-i;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
				swapped=true;
			}
		}
		if (swapped==false){
			break;
		}
	}
	cout<<"sorted array is : "<<endl;
	for(int k=0;k<n;k++){
		cout<<arr[k]<<" ";
	}
}
