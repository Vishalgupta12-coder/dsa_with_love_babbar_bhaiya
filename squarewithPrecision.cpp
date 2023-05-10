#include<iostream>
using namespace std;
int squareInt(int n){
	int s=0;
	int e=n;
	int mid=s+(e-s)/2;
	int ans= -1;
	while(s<=e){
		int square=mid*mid;
		if(square==n){
			return mid;
		}
		if(square<n){
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
double precesionSquare(int n,int precesion, int tempsol){
	
double f=1;
double ans=tempsol;
for(int i=0;i<precesion;i++){
	f=f/10; 
	for(double j=ans;j*j<n;j=j+f){
		ans=j;
	}
}
return ans;
}
int main(){
	int n,p;
	cout<<"Enter the number : ";
	cin>>n;
	cout<<"Enter precision : ";
	cin>>p;
	int tempsol=squareInt(n);
	cout<<"SquareRoot of "<<n<<" is : "<<precesionSquare(n,p,tempsol);
	return 0;
}
