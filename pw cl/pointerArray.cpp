#include<iostream>
using namespace std;






/*
void process(int *arr,int n){// inside the function we have the same access of the same array in the main

  for(int i=0;i<n;i++){
    cout<<*(arr+i)<<" "<<endl;
   }

   for(int i=0;i<n;i++){
    cout<<arr[i]<<" "<<endl;
   }
   *(arr+1)=25;




}

int main(){

  int arr[3]={15,12,6};
  process(arr,3);
  for(int i=0;i<3;i++){
    cout<<*(arr+i)<<" ";
   }
 //int n=3;
  //int *ptr=&arr[0];

  cout<<ptr<<" "<<arr<<"\n";// it show  the same value
  // name of array  actualy is a pointer of base array;
   cout<<*ptr<<" "<<*arr<<endl;
  // the dereference of arr and pointer is same  .so the array is always works as pointer 
  cout<<*(arr+0)<<endl;

  cout<<*(arr+1)<<endl;// it show the value of next index it show arr[1] value 
  cout<<*(arr+2)<<endl;// it show the value of next index it show arr[1] value 

   for(int i=0;i<n;i++){
    cout<<*(arr+i)<<" ";
   }


    return 0;
}
*/

int main(){
    /*
  int arr[5]={2,4,5,8,6};
  int *ptr=(arr+2);
  cout<<*ptr<<"\n";
  *ptr++;
    cout<<*ptr<<"\n";
    *ptr--;
      cout<<*ptr<<"\n";
      */

     // we can use pointer to point entire array 

     int arr[4]={2,8,6,7};
     int (*ptr)[4]=&arr;

     cout<<ptr<<" "<<arr<<endl;
          cout<<*ptr<<" "<<*arr;






return 0;
}