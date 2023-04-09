#include<iostream>
using namespace std;


int main(){

  /*

  for(int i=1;i<=10;i++){
      
      cout<<i<<" "<<i+10<<" "<<i+20<<" "<<i+30<<" "<<i+40<<" "<<i+50<<" "<<i+60<<" "<<i+70<<" "<<i+80<<" "<<i+90<<endl;
  }
*/
 int n;
 cin>>n;
  int arr[n];



  for(int i=0;i<n;i++){
       cin>>arr[i];
  }

for(int i=0;i<n;i++){
     
       if(i==0){
          if(arr[i]>arr[i+1]){
            cout<<arr[i];

          }
          else if(i===n-1){
            if(arr[i]>arr[i-1]){
                cout<<arr[i];
            }
          }
           else {
            if(arr[i]>arr[i+1] && arr[i]>arr[i]){
                cout<<arr[i]
            }
           }
     }
     
       
  }


    
} 
