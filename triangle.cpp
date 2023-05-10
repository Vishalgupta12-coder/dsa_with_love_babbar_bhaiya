/*
1
22
333
4444
55555*/
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<row;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}*/


/*
1
12
123
1234
12345*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<col;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}*/


/*
1 
2 3 
4 5 6 
7 8 9 10       
11 12 13 14 15*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   int row=1;
   int c=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<c<<" ";
            c=c+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}*/


/*
1 
2 3
3 4 5
4 5 6 7
 */
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   int row=1;
    while(row<=n){
        int col=1;
        int value=row;
        while(col<=row){
            cout<<value<<" ";
            value=value+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
} 

or

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<row+col-1<<" ";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
} 
*/

/*
1
21
321
4321
54321*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while (row<=n)
    {
        int col=1;
        while(col<=row){
            cout<<row-col+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    
    return 0;
}*/
/*
AAAAA
BBBBB
CCCCC
DDDDD
EEEEE*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while (row<=n)
    {
        int col=1;
        while(col<=n){
            char ch='A'+row-1;
            cout<<ch;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    
    return 0;
}*/

/*
A
BB
CCC
DDDD
EEEEE

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while (row<=n)
    {
        int col=1;
        while(col<=row){
            char ch='A'+row-1;
            cout<<ch;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    
    return 0;
}
*/

/*
ABCDE
BCDEF
CDEFG
DEFGH
EFGHI*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while (row<=n)
    {
        int col=1;
        while(col<=n){
            char ch='A'+row+col-2;
            cout<<ch;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    
    return 0;
}*/
/*
A
BC
CDE
DEFG
EFGHI
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while (row<=n)
    {
        int col=1;
        while(col<=row){
            char ch='A'+row+col-2;
            cout<<ch;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    
    return 0;
}*/
/*
D
CD
BCD
ABCD
*/

/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while (row<=n)
    {
        int col=1;
        
        while(col<=row){
            char ch='A'+n-row;+col-1;
            cout<<ch; 
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    
    return 0;
}*/

/*
   *
  **
 ***
****
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while (row<=n)
    {
       int space=n-row;
       while(space){
        cout<<" ";
        space=space-1;
       }
       int col=1;
       while(col<=row){
        cout<<"*";
        col=col+1;
       }
       cout<<endl;
        row=row+1;
    }
    
    return 0;
}
*/
/*
*****
****
***
**
*
*/

/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while (row<=n)
    {
       int col=1;
       while(col<=n-row+1){
        cout<<"*";
        col=col+1;
       }
       cout<<endl;
        row=row+1;
    }
    
    return 0;
}
*/
/*
*****
 ****
  ***
   **
    *
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while (row<=n)
    {
       int space=row-1;
       while(space){
        cout<<" ";
        space=space-1;
       }
       int col=1;
       while(col<=n-row+1){
        cout<<"*";
        col=col+1;
       }
       cout<<endl;
        row=row+1;
    }
    
    return 0;
}
*/
/*
    1
   121
  12321
 1234321
123454321
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while (row<=n)
    {//spaces print
       int space=n-row;
       while(space){
        cout<<" ";
        space=space-1;
       }
       //first triangle
       int col=1;
       while(col<=row){
        cout<<col;
        col=col+1;
       }
       //3rd triangle
       int s=row-1;
       while(s){
        cout<<s;
        s=s-1;
       }

       cout<<endl;
        row=row+1;
    }
    return 0;
}
*/
/*

1********1
12******21
123****321
1234**4321
1234554321
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while (row<=n)
    { //first triangle
        int col=1;
       while(col<=row){
        cout<<col;
        col=col+1;
       }
        //spaces print
       int space=n-row;
       while(space){
        cout<<"*";
        space=space-1;
       }
     int space1=n-row;
       while(space1){
        cout<<"*";
        space1=space1-1;
       }
       //4th triangle
        int s=row;
       while(s){
        cout<<s;
        s=s-1;
       }

       cout<<endl;
        row=row+1;
    }
    return 0;
}
*/

/*
12344321
123**321
12****21
1******1
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while (row<=n)
    { //first triangle
        int col=1;
       while(col<=n-row+1){
        cout<<col;
        col=col+1;
       }
        //spaces print
       int space=row-1;
       while(space){
        cout<<"*";
        space=space-1;
       }
       //spaces for 2nd triangle
     int space1=row-1;
       while(space1){
        cout<<"*";
        space1=space1-1;
       }
    //    //4th triangle
        int s=n-row+1;
       while(s){
        cout<<s;
        s=s-1;
       }

       cout<<endl;
        row=row+1;
    }
    return 0;
}