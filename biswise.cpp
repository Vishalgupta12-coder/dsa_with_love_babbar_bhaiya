/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n&1==1){
        cout<<"no is positive.";
        n>>1;
    }
    else{
      cout<<"no is -ve";
      n>>1;
    }
}
*/
// ******************************************************************************************************************
// decimal to binary
/*
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long int ans=0;
    int i=0;
    while(n!=0){
        long int bit=n&1;
        cout<<"bit= "<<bit<<endl;
        ans=bit*pow(10,i)+ans;
        cout<<ans<<endl;
        n=n>>1;
        i++;
    }
    cout<<ans;
}

*/
// ******************************************************************************************************************
/*
//reverse an array
#include<iostream>
using namespace std;
int main(){
     int n;
     int arr[10];
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter "<<i<<" ";
        cin>>arr[i];
    }
    for(int j=n;j>0;j--){
        cout<<arr[j-1]<<" ";
    }
}
*/
// ******************************************************************************************************************
/*
//sum and product of number
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s=0;

    int p=1;
    while(n!=0)
    {
    int a=n%10;
    s+=a;
    p*=a;
    n=n/10;
    }
    cout<<s<<" "<<p;
}*/
// ******************************************************************************************************************
/*
//Reverse a number but we cannt use that number as whole.
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rem;
    while(n!=0){
      rem=n%10;
      cout<<rem;
      n=n/10;
    }
}
*/
// ******************************************************************************************************************
// Reverse a number that can be used further
/*
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rem;
    int rev=0;
    while(n!=0){
      rem=n%10;
      rev=rev*10+rem;
      n=n/10;
    }
    cout<<rev;
}
*/
// ***************************************************************************************************************
// compliment of base 10
/*
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m=n;
    int mask=0;//mask initialization to 0
    if (n==0){
        cout<<1;//if number is 0 then their comliment is 1
        }
    while(m!=0){
        mask=(mask<<1) | 1;//left shift the mask and or with 1 to make the mask
        m=m>>1;//risht shift the number to make it zero so that whike loop terminates
    }
    int ans=(~n) & mask; // main formula not n and with mask to get the final answer
    cout<<ans;
}
*/
// *************************************************************************************************************
// power of 2 or not
/*
#include<iostream>
#include<math.h>
using namespace std;
int isSquare(int n){
    for (int i = 0; i <=30; i++)
    {
        int ans = pow(2,i);
        if (ans==n)
            {
                return true;
            }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    if (isSquare(n)){
          cout<<"yes this number is in the power of 2";
    }
    else
    {
        cout<<"No this number is not in the power of 2";
    }
}
*/

/*
*************************************************************************************************************
//print distribution of notes on a particular value
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int hndrd ,ffty,twnty,one;
for (int i = 100; i >0; i--)
{
    switch (i)
    {
    case 100:
        hndrd=n/100;
        cout<<"No of 100 rupee notes : "<<hndrd<<endl;
        n=n-hndrd*100;
        break;
    case 50:
        ffty=n/50;
        cout<<"No of 50 rupee notes : "<<ffty<<endl;
        n=n-ffty*50;
        break;
    case 20:
        twnty=n/20;
        cout<<"No of 20 rupee notes : "<<twnty<<endl;
        n=n-twnty*20;
        break;
    case 1:
         one=n/1;
        cout<<"No of one rupee notes : "<<one<<endl;
        break;
    }
}
}

*/
// functions

// nCr of a number n!/r!*(n-r)!
/*
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
*****************************************************************************************************************

//print maximum number of consecutive 1's in binary number of the given decimal number.

#include<iostream>
using namespace std;
void DecimalToBinary(int n) {
   int binaryNumber[100], num=n;
   int c=0,max=0;
   int i = 0;
   while (n > 0) {
      binaryNumber[i] = n % 2;
      n = n / 2;
      i++;
   }
   int l=sizeof(binaryNumber)/sizeof(int);
   for (int j = 0; j < l; j++){
       if(binaryNumber[j]==1){
    c=c+1;
   }
   else{
    c=0;
   }
   if (c>max)
   {
    max=c;
   }
   }
    cout<<max;
   }
int main(){
    int n;
    cin>>n;
    DecimalToBinary(n);

}
**********************************************************************************************
OR
**********************************************************************************************
*/
//print maximum number of consecutive 1's in binary number of the given decimal number.
#include <iostream>
using namespace std;
//************function to find max no of ones***********
void max(int binaryNumber[],int l)
{
    int c = 0, max = 0;
    for (int j = 0; j < l; j++)
    {
        if (binaryNumber[j] == 1)
        {
            c = c + 1;
        }
        else
        {
            c = 0;
        }
        if (c > max)
        {
            max = c;
        }
    }
    cout << max;
}
//******function to convert decimal number to binary number*****
// #include <iostream>
// using namespace std;
void DecimalToBinary(int n)
{
    int binaryNumber[100], num = n;
    int l = sizeof(binaryNumber) / sizeof(int);
    int i = 0;
    while (n > 0)
    {
        if (n & 1)
        {
            binaryNumber[i] = 1;
            n = n >> 1;
            i++;
        }
        else
        {
            binaryNumber[i] = 0;
            n = n >> 1;
            i++;
        }
    }
    max(binaryNumber,l);
}
//main function
int main()
{
    int n;
    cin >> n;
    DecimalToBinary(n);
}
