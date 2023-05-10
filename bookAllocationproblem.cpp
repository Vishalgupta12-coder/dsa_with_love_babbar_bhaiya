#include<iostream>
using namespace std;
bool isPossible(int arr[],int n,int m,int mid){
	int studentSum=1;
	int bookSum=0;
	for(int i=0;i<n;i++){
		if(bookSum+arr[i]<=mid){
			bookSum+=arr[i];
		}
		else{
			studentSum++;
			if(studentSum>m || arr[i]>mid){
				return false;
			}
			bookSum=arr[i];
		}
	}
	return true;
}
int allocateBooks(int arr[],int n,int m){
	int s=0;
	int sum=0;
	int ans=-1;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	int e=sum;
	int mid=s+(e-s)/2;
	
while(s<e){
	if(isPossible(arr,n,m,mid)){
		ans=mid;
		e=mid-1;
		}
	else{
		s=mid+1;
	}
mid=s+(e-s)/2;	
}
return ans;
}
int main(){
	int arr[4]={10,20,30,40,};
	int n=4;
	int m=2;
	int a=allocateBooks(arr,n,m);
	cout<<a;
}
