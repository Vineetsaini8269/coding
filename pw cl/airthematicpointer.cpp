#include<iostream>
using namespace std;

int main(){
/*
    int x=5;
    int *ptr=&x;
     double d = 2.5;
     double *ptr2 = &d;

        cout<<sizeof(double)<<endl;

    cout<<sizeof(x)<<endl;
        cout<<ptr2<<" "<<(ptr2+1)<<endl;
        cout<<ptr2<<" "<<(ptr2+2)<<endl;
        cout<<*ptr2<<" "<<(*ptr2+2)<<endl;

    cout<<ptr<<" "<<(ptr+1)<<endl;
    */

   int arr[2]={5,18};
   int *ptr = &arr[0];
   // postfix airthematic
   /// @return 
   /*
   cout<<ptr<<" "<<*ptr;
   cout<<(ptr+1)<<" "<<*(ptr+1)<<endl;

   cout<<*ptr++<<" ";// first print the value of  arr[0]=5 then it increase value and pointer point to arr[1] value is 18
   cout<<arr[0]<<" "<<arr[1]<<endl;
      cout<<ptr<<" "<<*ptr;
*/
   cout<<*ptr++<<" "<<endl;// first print the value of  arr[0]=5 then it increase value and pointer point to arr[1] value is 18
     cout<<arr[0]<<" "<<arr[1]<<endl;

 cout<<(*ptr)++<<" "<<endl;// first print the value of  arr[0]=5 then it increase value of arr[0] to 6
  //cout<< ++(*ptr);
     cout<<arr[0]<<" "<<arr[1]<<endl;

     // prepost increment

     cout<<++*ptr<<endl;
          cout<<arr[0]<<" "<<arr[1]<<endl;






}