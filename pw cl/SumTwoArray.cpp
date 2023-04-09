#include<iostream>
#include<vector>
using namespace std;

int main(){

// summ of two acending  array as a new ascending array

int arr1[]={1,2,3,5};
int arr2[]={2,3,6,8,9};

int m=4;
int n=5;

int resultarr[m+n];

int i=0;
int j=0;
int k=0;

while(i<m && j<n){
    if(arr1[i] < arr2[j]){
      resultarr[k]=arr1[i];
      k++;
      i++;
    }
    else{
        resultarr[k]=arr2[j];
        k++;
        j++;
    }
}

while(i<m){
    resultarr[k]=arr1[i];
    k++;
    i++;
}

while(j<n){
    resultarr[k]=arr2[j];
        k++;
        j++;

}


for(int i=0;i<(m+n);i++){
cout<<resultarr[k]<<" ";
}




    return 0;
}