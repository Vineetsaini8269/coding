#include<iostream>
using namespace std;

int main(){
    

      int arr[]={1,2,5,8};
      flag=0;
        
        int max=arr[0];

         for(int i=0;i<arr.sizeof();i++){
                for(int j=i+1;j<arr.size();j++){
                     if(arr[i]==arr[j]){
                        arr[j]=0;
                        flag=0;
                     }
                }
                if(flag==0){
                    
                }


         }

   
    
     
    
        
     
     
     





    return 0;
}