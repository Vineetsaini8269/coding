#include<iostream>
using namespace std;
int main(){

    // array 

    // representation of array

   // int array[5];

 //initialization of array

 //int arr[]={1,2,3,4,5};

 // size of array in byte
 /// cout<<sizeof(arr);

// length of array 
// cout<<sizeof(arr)/sizeof(arr[0]);

// 0 based indexing
//cout<<arr[0];
//cout<<arr[2];

// Traversing of a array  (means show all value of array)
/*
int arr[]={1,2,3,4};

// by for loop
 int size=sizeof(arr)/sizeof(arr[0]);       // for lppo show  index by data
for(int idx=0;idx<size;idx++){
    cout<<arr[idx]<<endl;
}
// by for each loop

for(int element:arr){           // for each loop show  element by data 
    cout<<element<<endl;
}

// while loop

int index=0;
while(index<size){
    cout<<arr[index]<<endl;        // while loop show index by data
    index++;
}
*/


//  Taking input on array

//int arr[4];

//take input by for loop

 //for(int idx=0;idx<4;idx++){       // taking input
 //   cin>>arr[idx];
//}

  // by for each loop take input

 /* for(int element:arr){   // there for loop does mot input directly into the array when you should takae input by user then the 
                             // variable should always declare as refrencing (&) variable. 
    cin>>element;    // error
  }

  for(int &element:arr){
      cin>>element;
   }


// take output by for loop

/*for(int idx=0;idx<4;idx++){
    cout<<arr[idx]<<endl;          // take output
}

//output by for each loop

for(int element:arr){
    cout<<element<<endl;
}


//practice question onn array 

//1 give inupt of vowels and giv eoutput on arrray

char vowels[5];

for(int idx=0;idx<5;idx++){
    cin>>vowels[idx];
}
for(int idx=0;idx<5;idx++){
    cout<<vowels[idx]<<endl;
}


//by foreach loop
for(char &element:vowels){
    cin>>element;
}
for(char element:vowels){
    cout<<element<<endl;
}


//sum  of all element of array

int arr[]={2,3,4,8,9};
int size=sizeof(arr)/sizeof(arr[0]);
int sum=0;

for(int idx=0;idx<size;idx++){
    sum+=arr[idx];
}
cout<<sum<<endl;


//maximum value of array

int arr[]={4,6,3,20};
int max=arr[0];
for(int idx=1;idx<4;idx++){
    //max =arr[0];
    if(arr[idx]>max){
        max=arr[idx];
        
    }
}
    cout<<max<<endl;



return 0;
}


// linaer search

int arr[]={1,3,6,8};
//int size=sizeof(arr)/sizeof(arr[0]);
int key;
int ans=-1;
cout<<"enter a number:";
cin>>key;
for(int i=0;i<4;i++){
    if(arr[i]==key){
        ans=i;
    }
}
cout<<"element found in index: "<<ans<<endl;
}


// print last element off array

int arr[]={2,5,9,7};
for(int i=0;i<4;i++){
      cout<<arr[3]<<endl; 
      break;
}


//print first element of array
int arr[]={2,5,9,7};
for(int i=0;i<4;i++){
      cout<<arr[i]<<endl; 
      
}


// swap first and last elemnt
 int arr[]={5,6,8,3};
 int temp;
 for(int i=0;i<4;i++){
     int temp=arr[0]; 
     arr[0]=arr[1];
     arr[1]=temp;
     cout<<arr[i]<<endl;
   }

// linear search

char arr[]={'a','e','i','o','u'};
char key='i';
char ans='no';
for(int i=0;i<5;i++){
    if(arr[i]==key){
        ans=i;
    }
}
cout<<ans<<endl;
}


int arr[]={5,9,8,3};
int key=9;
int ans=-1;
for(int i=0;i<4;i++){
    if(arr[i]==key){
        ans=i;
    }

}
cout<<"element found in index :"<<ans;

}


//multple of all array element

int arr[]={4,3,2,5};
int multi=1;
for(int i=0;i<4;i++){
    multi*=arr[i];

}
cout<<multi<<endl;

// average of array

int arr[]={9,2,4,5};
int size=sizeof(arr)/sizeof(arr[0]);
int avg=0;
for(int i=0;i<4;i++){
    avg=(avg+arr[i])/size;

}
cout<< avg<<endl;


//min num of arry

int arr[]={2,4,6,8};
int min=arr[0];
for(int i=0;i<4;i++){
    if(arr[i]<min){
        min=arr[i];
    }
}
cout<<min;


//linear search

int arr[]={5,6,4,3};
int key=4;
int ans=-1;
for(int element:arr){
    if(element==key){
        ans=element;
    }
}
cout<<ans;

// min number in array

int arr[]={6,1,3,2};
int min=arr[0];
for(int element:arr){
    if(element<min){
        min=element;
    }
}
cout<<min;

}


// maximun num

int arr[4]={3,9,6,8};
int max=arr[0];
for(int element:arr){
    if(element>max){
        max=element;
    }
}
cout<<max;
}
*/
/*
char vin[6];

int size=sizeof(vin)/sizeof(vin[0]);
for(int i=0;i<size;i++){
     cin>>vin[i];
     
}
for(int i=0;i<size;i++){
     cout<<vin[i];

}


char name[6];

int size=sizeof(name)/sizeof(name[0]);
for(int i=0;i<size;i++){
     cin>>name[i];
     
}
for(int i=0;i<size;i++){
     cout<<name[i];

}

//Write a C++ program to find the largest element of a given array of integers  /maximum num

int arr[]={2,3,9,8};
int max=arr[0];
for(int i=0;i<4;i++){
    if(arr[i]>max){
        max=arr[i];
    }
}
cout<<max;
*/

//Write a C++ program to find the largest three elements in an array

int arr[]={1,2,5,9,8};
int size=5;
int max=arr[0];
int secondmax=arr[0];

for(int i=0;i<5;i++){
    if(arr[i]>max){
        arr[i]=max;
    }
}
for(int i=0;i<5;i++){
    if(arr[i]>secondmax && arr[i]!=max){
        cout<<arr[i]<<endl;
    }
}
}



