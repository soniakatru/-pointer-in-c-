/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;


 int getSum(int *b,int n){
      cout<< " size of array"<<sizeof(b)<< endl<<  endl; ///0/p =8   agr array  as a pointer jata hai toh iska
     int sum = 0;
     for(int i = 0; i < n ; i++){            // benefit kya hai 
          sum = sum + b[i];
     }                                     // 1 . benefit  part of array pass  // specic part send as a parameter 
     return sum;
 }

 void print( int *p){ // argument  is  passing pointer 
     
      cout << *p << endl;
 }

 void update(int*p){  // 100 pointer passing  pointer 
     
 //    p = p+1;   // 100 + 1*4= 104 
    //  cout<< p << endl;
      *p = *p+1;        //   5 = 5+1 = 6   update  value 
 }  

int main()
{
     //  code help   pointer part second  time 45: 122............
     
      char ch[6] = " abcd";
    //  char * p = " qbcdr";  //  wrong approach 
     
     int value = 5;
     int *p = &value;
     
     cout<< " before update" <<*p<< endl;  // asume 100
   // print(p);                              
    update(p);                    // begore and after same value 
      cout<< " after update" << *p << endl;  // 



  int  b[8] = {1,2,3,4,5,8};

 cout<< " sum is "<< getSum(b+3,5)<< endl<< endl; 













    return 0;
}