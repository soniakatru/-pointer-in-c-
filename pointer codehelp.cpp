/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

 // codehelp love babbar
 
int main()
{
    int n = 2;
    int * ptr = &n;
 cout << ptr <<endl;
 cout << *ptr << endl;
 cout<< &n << endl;
 cout<< n<<endl;
 /// size of pointer is always 8 byte 
  double d = 42.44;             //   int * ptr = & n == int * ptr = 0
  double *c = &d;                                  //      ptr = & n;  same
   cout<< d<<endl;
  cout << "value of d = "<< *c;
 cout <<" " << "value of c = "<< c;
 cout << "      size of ptr =    "<< sizeof(ptr)<<endl;
 cout << "  size of  c = "<< sizeof(c);
  cout << "   size of  n = "<< sizeof(n);
  cout << "   size of  d = "<< sizeof(d)<<endl;
  
  int num = 6;
  
  int *p = &num;
  (*p)++;
  cout<<num<<" ";
  cout<< *p++ << "       ";
  cout<<*p+1<<"      "<< p;
 //copying a pointer 
 
  int *q = p;
  cout<< p<<" ";
  cout<<q;
  
  
  
    return 0;
}