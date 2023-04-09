#include<iostream>
using namespace std;

int main(){

    
   int arr[6]={2,9,6,3,7,5};
   int a[4]={9,6,1,5};
   int b[4]={1,4,10,9};
    int arr2[6];

   for(int i=0;i<sizeof(a);i++){
      for(int j=0;j<sizeof(arr);j++){
        if(a[i]!=arr[j]){
            arr2[i++]=arr[i];
           
        }
      }
      for(int i=0;i<sizeof(arr2);i++){
             cout<<arr2[i]<<" ";
      }

      

   }


}