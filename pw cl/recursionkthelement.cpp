#include<iostream>
using namespace std;

bool f(int *arr,int n,int i,int x ){

    if (i==n) return false;

    return (arr[i]==x) || f(arr,n,i+1,x);
}

int main(){
     int arr[]={5,4,8,6,3,9};
     int n=6;
     int x=9;
     bool result=f(arr,n,0,x);
     if(result) cout<<"yes";
     else{
        cout<<"no";

     }


    return 0;
}