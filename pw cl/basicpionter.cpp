#include<iostream>
using namespace std;

int main(){


  // first we use the address-of operator to show the  addresss of variable in the buket

 // int x = 10;
 // float y=8.5;
  //cout << &x<<" "<<&y; 

//  now we can use pointer to the  store  address
// pointer is special type of variable that can store a address of an another variable in a bucket;

// when an a variable is in integer form then it should we compulsary that the pointer always be interger or same datatype


   //syntax of pointer  -  datatype *(extract)pionter_name;

   // int *ptr;

   //we can store the address of  any variable with addressof of variable;


   //now store the address of variable

  // int *ptr= &x;

   //cout<<ptr<<" ";
  // float *ptr2=&y;
   //cout<<ptr2;

   //declare a only a pointer

   // int *ptr;
    //cout<<ptr<<" "; // it store a address .it store a random address 

    // first declare a pointer, then it store the new variable in a pointer 

    //   int x=4;

     //  ptr=&x;  // reaasignment or update , a varible it does not *(exact )use always

  // cout<<ptr;

 //  float x=5.6;

  // int *ptr = &x;// using same datatype
  
  // float *ptr=&x;
  // cout<<ptr;



  // accessing the variable ora data through a pointer 

   // we use Derefrencing(*)exact   oprator  to access the variable

   // when we use pointer as LHS left side the we storing the address of avriable 
   // when we use pointer as RHS right side then we can accesssing these variable that can store the address on pointer variable


 //   int x=10;
  //  int *ptr=&x;  /// noramlly we store the address in pointer a variable
 //   cout<<" adress store in ptr "<<ptr<<endl;
  //  cout<<"acessing the varible that can refrence "<<*ptr<<endl; // and now we can derefrence a variable to access it .

// revalue to the x variable
  // x=15;
  //now the bucket x was change into 10 to 15
  // but ptr pointer is still pionting thea same bucket 
  // and now derefrencing ptr the value we get is 15

  //cout<<" new update value "<< x<<endl;
  //cout<<" now if derencing the a ptr value "<<*ptr<<endl;

  // should i can update my value of x or any variable with pointer variable ptr

  // yes be can

  //update value with ptr pointer variable
/*
  *ptr=50;

  cout<<" new update value of x "<<x<<endl;
  cout<<" value update with ptr is : "<<*ptr<<endl;

  int value= *ptr;
  cout<<" vaue is : "<<value<<endl;
*/


 int x=8;
 int y=9;
 int *ptr=&x;

 // ptr =5;   we cant do this as ptr only store address nothing else

//  *ptr=&y;  this can not work as we can not store address in an int bucket
cout<<" address of variable x :"<<&x;
cout<<" address of stored inside ptr "<<ptr;

 cout<<" this is the address of bucket of pointer ptr not the address of stored variable"<<&ptr;







    return 0;
}