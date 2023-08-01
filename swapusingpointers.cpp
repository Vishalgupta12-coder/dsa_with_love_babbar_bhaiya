#include <iostream>
using namespace std;
int main(){
    int x=1,y=2 ,temp;
    int *a=&x,*b=&y;
    temp=*a;
    *a=*b;
    *b=temp;
    cout<<"print with pointers : ";
    cout<<*a<<" "<<*b<<endl;
    cout<<"print with actual values : ";
    cout<<x<<" "<<y;
       
}