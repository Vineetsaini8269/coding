#include<iostream>
#include<vector>
using namespace std;




int main(){

   int arr[]={5,10,15,20,25,26};

   int x=30;
   int n=6;

   // if their sum exist pairs of sum arry

   int i=0;
   int j=1;
    bool found=false;

   while(i<n and j<n){
      if( abs(arr[i]-arr[j])==x){
        found =true;
        break;
         }
      else if( abs(arr[i]-arr[j])<x){
        i++;
         }
      else{
        j--;
         }
    }
       if(found==true){
        cout<<"yes";
       }
       else 
       cout<<"no";

   




    return 0;
}