/*
//functions

//nCr of a number n!/r!*(n-r)!
#include<iostream>
using namespace std;
int fact(int num){
    int f=1;
    for (int i = 1; i <=num; i++)
    {
        f=f*i;
    }
    return f;
}
int main(){
    int n,r;
    cin>>n>>r;
    int a=fact(n);
    int b=fact(r);
    int c=fact(n-r);
    int d=a/(b*c);
    cout<<"Answer of "<<n<<" C "<<r<<" is "<<d;
}

//************************************pass by value************************************************
#include<iostream>
using namespace std;
void fact(int num){
    num++;
    cout<<"New number is : "<<num<<endl;
}
int main(){
    int n;
    cin>>n;
    fact(n);
    cout<<"n= "<<n;
    return 0;
}

#include<iostream>
using namespace std;
int update(int num){
  num*=5;
  return num;
}
int main(){
    int n=10;
    update(n);
    cout<<"n= "<<n;
    return 0;
}
//**********************************************************arrays *****************************************
#include<iostream>
using namespace std;
int main(){
    int arr1[5]={1};
    cout<<arr1[2];
}


//********************************************minimum and maximum value in array**************************************
#include<iostream>
using namespace std;
int minValue(int arr[],int size){
    int min=INT32_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]<min){
            min=arr[i];
        }
    }
    return min; 
}
int maxValue(int arr[],int size){
    int max=INT32_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>max){
            max=arr[i];
        }
        //max=max(max,arr[i]) it is same as above if statemant
    }
    return max;
}
int main(){
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    int arr[100];
    cout<<"Enter "<<size<<" values : "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Minimum value is : "<<minValue(arr ,size)<<endl;
    
    cout<<"Maximum value is : "<<maxValue(arr ,size);   
}


//******************************************sum of all elements of array******************************************
#include<iostream>
using namespace std;
int sum(int arr[],int n){
    int sum=0;

    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int n;
    int arr[50];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int ans=sum(arr,n);
    cout<<ans;  
}
//********************************************linear search**************************************
#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int num){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==num)
        {
            return i;
        }     0
    }
    return -1;
    
}
int main(){
    int n,num;
    int arr[50];
    cin>>n>>num;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int ans=linearSearch(arr,n,num);
    if(ans == -1){
        cout<<num<<" is not present.";
    }
    else
    {
        cout<<num<<" is at index : "<<ans; 
    }     
}


//***********************************reverse an array************************************
#include<iostream>
using namespace std;
//function to reverse the array
int reverse(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start+=1;
        end-=1;
    }   
}
//function to print the array
int print(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }   
}

//function to get the array
int getArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }   
}
//main function
int main(){
    int n;
    int arr[50];
    cin>>n;
    getArray(arr,n);
    reverse(arr,n);
    print(arr,n);
}


//****************************swap alternative elements of an array************************************

#include<iostream>
using namespace std;
//function to swap alternate the array
int swapAlternate(int arr[],int n){
    //using while loop
    // int start=0;
    // int end=1;
    // while(end<n){
    //     swap(arr[start],arr[end]);
    //     start+=2;
    //     end+=2;
    // }   

    //using for loop
    for(i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[start],arr[end]);
        }
    }
}
//function to print the array
int print(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }   
}

//function to get the array
int getArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }   
}

//main function
int main(){
    int n;
    int arr[50];
    cin>>n;
    getArray(arr,n);
    swapAlternate(arr,n);
    print(arr,n);
}



//*******************************************intersaction of two arrays****************************************
#include<iostream>
using namespace std;
//function to find intersaction of two arrays
int arrayIntersaction(int arr[],int arr1[],int n,int n1){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            if (arr[i]==arr1[j])
            {
                cout<<arr[i]<<" ";
            }
        } 
    }
}
//function to print the array
int print(int arr[],int n){
    cout<<"Common elements are : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }   
}

//function to get the array.
int getArray(int arr[],int n){
    cout<<"Enter "<<n<<" elements : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }   
}
//main function

int main(){
    int n,n1;
    int arr1[50];
    int arr2[50];
    cout<<"Enter total no of elements in ist array : ";
    cin>>n;
    cout<<"Enter total no of elements in 2nd array : ";
    cin>>n1;

    getArray(arr1,n);
    getArray(arr2,n1);
    arrayIntersaction(arr1,arr2,n,n1);
}
*/

//***************************************pair sum********************************************
/*
#include<iostream>
using namespace std;
//function to swap alternate the array
int pairSum(int arr[],int n){
    int start=0;
    int end=1;
    while(end<n){
        int sum= arr[start]+arr[end];
        cout<<sum<<" ";
        sum=0;
        start+=2;
        end+=2;
    }   
}
//function to print the array
int print(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }   
}

//function to get the array

int getArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }   
}

//main function
int main(){
    int n;
    int arr[50];
    cin>>n;
    getArray(arr,n);
    pairSum(arr,n);
    // print(arr,n);
}

//****************************find unique elemet all elements are in pairs except one element******************************

#include<iostream>
using namespace std;
//function to swap alternate the array
int uniqueElements(int arr[],int n){
    int unique=0;
    for (int i = 0; i < n; i++)
    {
        unique=unique ^ arr[i];
        
    }
    return unique;
    
}
//function to get the array

int getArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }   
}

//main function
int main(){
    int n;
    int arr[50];
    cin>>n;
    getArray(arr,n);
    int u=uniqueElements(arr,n);
    cout<<u;
    // print(arr,n);
}

//************************find duplicate elemet all elements have single occurance except one element******************************

#include<iostream>
using namespace std;
//function to swap alternate the array
int duplicates(int arr[],int n){
    int unique=0;
    for (int i = 0; i < n; i++)
    {
        unique=unique ^ arr[i];
        
    }
    for (int i = 1; i < n; i++)
    {
        unique=unique ^ i;
    }
    
    return unique;
    
}
//function to get the array

int getArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }   
}

//main function
int main(){
    int n;
    int arr[50];
    cin>>n;
    getArray(arr,n);
    int u=duplicates(arr,n);
    cout<<u;
}
*/
