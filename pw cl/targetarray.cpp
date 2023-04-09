#include<iostream>
#include<vector>
using namespace std;

/*

// second largest
int largestelement(int arr[],int size){
    int max = INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
*/
int main(){
    

/*

 // target sum =7

 int arr[]={3,4,1,6,7};
 int targetsum=4;
 int count =0;
for(int i=0;i<5;i++){
     for( int j=i+1;j<5;j++){

        if(arr[i]+arr[j]==targetsum){
            count++;
        }
     }
}
cout<<count<<endl;


// count the number of triplets whose sum is equal to given value x.

int arr[]={3,1,2,4,0,6};
 int targetsum=5;
 int count =0;
for(int i=0;i<6;i++){
     for( int j=i+1;j<6;j++){
        for(int k=j+1;k<6;k++){

        if(arr[i]+arr[j]+arr[k]==targetsum){
            count++;
        }
        }
     }
}
cout<<count<<endl;


// find unique number in a arry which not comes twice in a array

int array[]={2,3,1,3,2,4,4,5,1};

for(int i=0;i<9;i++){
    for(int j=0;j<9;j++){
        if(array[i]==array[j]){
            array[i]=array[j]=-1;
        }

    }
}

for(int i=0;i<9;i++){
    if(array[i]==1){
       cout<<array[i];
       
    }
 }
 

// find the second largests element in the given array

int arr[]={1,2,5,7,8};
int size=5;
int max=arr[0];
int secondmax=arr[0];

for(int i=0;i<5;i++){
    if(arr[i]>max){
        max=arr[i];
    }
}
for(int i=0;i<5;i++){
    if(arr[i]>secondmax && arr[i]!=max){
        secondmax=arr[i];
       // cout<<secondmax<<endl;
    }
}
 cout<<secondmax<<endl;


//
int secondlargest(int arr[],int size){

    int max=arr[0];
    int secondmax=arr[0];

for(int i=0;i<size;i++){
    if(arr[i]>max){
        max=arr[i];
    }
}
for(int i=0;i<size;i++){
    if(arr[i]>secondmax && arr[i]!=max){
        secondmax=arr[i];
       // cout<<secondmax<<endl;
    }
}
}
int main(){
    int arr[]={2,3,5,7,6,1,7};
    int n=7;
    cout<<secondlargest(arr,n);


//rotate the given array 'a' by k steps where k is non negetive .
// k is graeter then nas well where n is the size of array 'a'

int arr[]={1,2,3,4,5};
int k=2;
int n=5;

k=k%n;
int ansarr[5];
int j=0;
// insert last element in array
for(int i=n-k;i<n;i++){
    ansarr[j++]=arr[i];

}
//1 2 3
//4 5
for(int i=0;i<=k;i++){
    ansarr[j++]=arr[i];
}

for(int i=0;i<n;i++){
    cout<<ansarr[i]<<endl;
}
cout<<endl;
*/



// givenq queries ,check if the given number is present in the array  or not

// value of the element in the array is less than 10 to the power 5;

//2 3 5 6 7 8

int n;
cin>>n;

vector <int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];

}

const int N= 10^5;
vector <int> freq(N,0);
for(int i=0;i<n;i++){
    freq[v[i]]++;
}


cout<<"enter queries";
int q;
cin>>q;


while(q--){
    int queryelement;
    cin>>queryelement;
    cout<<" query "<<queryelement<<endl;
}


    return 0;
}