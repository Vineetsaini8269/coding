#include<iostream>
using namespace std;

int main(){


// add number with pointer 

int x,y;  /// declare x and  y with a garbage value
  
   cin>>x>>y;  // taking a input;

   int *ptr=&x;   // & x fetch  address of x and store in ptr 
    cout<< " adress of  x : "<<ptr<<endl;
    cout<<" accessing the value of x with ptr :"<<*ptr<<endl;
   int *ptr2=&y;   // &y fetch address of y and store in ptr2
    cout<< " adress of  y : "<<ptr2<<endl;
        cout<<" accessing the value of y with ptr :"<<*ptr2<<endl;


   int result;

   int *ptr_result = & result;

    *ptr_result=*ptr+*ptr2;

    cout<<result<<endl;

    cout<<" result of sum  variable using pointer :"<<*ptr_result<<endl;







    return 0;
}