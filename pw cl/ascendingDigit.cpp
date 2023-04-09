#include<iostream>
using namespace std;

int main(){
    


   int n;
   cin>>n;
   int a,b;


    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i>n;i++){
        for(int j=i+1;j>n;j++){
            if(arr[i]<0){ 
                 a=arr[i]*(-1); 
            }
           else{
                a=arr[i];

            }
            if(arr[j]<0){
                b=arr[j]*(-1);
            }
            else{
                b=arr[j];
            }

            if(a>b){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            
    

            
        }
    }
           for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;;
    }
    
    
   


    return 0;
}