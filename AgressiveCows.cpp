#include<iostream>
using namespace std;
bool isPossible(int arr[],int k,int mid){
	int cowCount=1;
	int lastPos=arr[0];
	int n=sizeof(arr) / sizeof(arr[0]);
	for(int i=0;i<n;i++){
		if(arr[i]+lastPos>=mid){
			cowCount++;
			if(cowCount==k){
				return true;
			}
			lastPos=arr[i];
		}
	}
	return false;
}
int aggressiveCows(int arr[],int k){
	int n=sizeof(arr) / sizeof(int);
	cout<<n<<endl;
//	sort(arr[0],arr[n-1]);
	int s=0;
	int maxi=-1;
	int ans=-1;
	for(int i=0;i<n;i++){
		maxi=max(maxi,arr[i]);
	}
	cout<<"max value : "<<maxi<<endl;
	int e=maxi;
	int mid=s+(e-s)/2;
	
while(s<e){
	if(isPossible(arr,k,mid)){
		ans=mid;
		s=mid+1;
		}
	else{
		e=mid-1;
	}
mid=s+(e-s)/2;	
}
return ans;
}
int main(){
	int arr[]={1,2,3,4,6};
	int k=5;
	int a=aggressiveCows(arr,k);
	cout<<a;
}
