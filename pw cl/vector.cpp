#include<iostream>
#include<vector>
using namespace std;

//int main(){

    // vector
 
 // syntax of vector

 // vector<int> v;

//operation in vector

// size operation & capacity operation
 /*
 vector<int> v;

 cout<<"size :"<<v.size()<<endl;
 cout<<"size :"<<v.capacity()<<endl;

// pushback operation - insert element by last side

v.push_back(1);
cout<<"size :"<<v.size()<<endl;
 cout<<"capicity :"<<v.capacity()<<endl;

 v.push_back(2);
 cout<<"size :"<<v.size()<<endl;
 cout<<"capicity :"<<v.capacity()<<endl;

 v.push_back(3);
 cout<<"size :"<<v.size()<<endl;
 cout<<"capicity :"<<v.capacity()<<endl;

// resize operation  - resize the vector

 v.resize(5);
 cout<<"size :"<<v.size()<<endl;
 cout<<"capicity :"<<v.capacity()<<endl;

 v.resize(10);
 cout<<"size :"<<v.size()<<endl;
 cout<<"capicity :"<<v.capacity()<<endl;

 //  pop_back operation -delete by last element

 v.pop_back();
 v.pop_back();
 v.pop_back();
 cout<<"size :"<<v.size()<<endl;
 cout<<"capicity :"<<v.capacity()<<endl;

 //insert operation- insert any where but show begin opration()

v.insert(v.begin()+3,8);
cout<<"size :"<<v.size()<<endl;
 cout<<"capicity :"<<v.capacity()<<endl;

 //erase operation = delete element by anywhere in vector with the help of begin() & end() operation 

 v.erase(v.end()-2); 
 cout<<"size :"<<v.size()<<endl;
 cout<<"capicity :"<<v.capacity()<<endl;
 
 // clear operation - it delete all the vector

// v.clear();


// looping in vector

vector<int> v;
 
 // input element 
 for(int i=0;i<5;i++){
    int element;
    cin>>element;
    v.push_back(element);
 }
  
// for loop
// output
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
v.insert(v.begin()+2,4);

// by for each loop
for(int ele:v){
    cout<<ele<<" ";
}
cout<<endl;

v.erase(v.end()-2);

// by while loop

int idx=0;
while(v.size()>idx){
    cout<<v[idx++]<<" ";
    
}


// find the last accurance of an element x in given array x last me kaha paar h
// element   - 1 2 3 6 1 5 6 4 1

vector<int>v(6);
for(int i=0;i<6;i++){
    cin>>v[i];
}

cout<<"enter x :";
int x;
cin>>x;
int value=-1;
//(int i=0;i<v.size();i++){(
    for(int i=v.size()-1;i>=0;i--){
    if(v[i]==x){
     value=i;
     break;
         }
}
cout<<value<<endl;


// find the count of occurance of vector x variable 

vector<int>v(6);
for(int i=0;i<6;i++){
    cin>>v[i];
}

cout<<"enter x :";
int x;
cin>>x;
int occurance=0;
 for(int ele:v){
    if(ele==x){
     occurance+=1;
     
         }
}
cout<<occurance<<endl;


//count the number of element strictly greater than x.

vector<int> v(6);
int x;
cout<<"enter x :";
cin>>x;
for(int i=0;i<6;i++){
    cin>>v[i];
}
int count=0;

for(int element :v){
    if(element>x){
        count++;
    }
}
cout<<"the count is :"<<count<<endl;


// check the given element is sorted or not

int arr[]={1,2,3,4,5,6};
bool flag=true;
for(int i=1;i<6;i++){
    if(arr[i]<=arr[i-1]){
        flag=true;

    }
}
 cout<<flag<<endl;
return 0;
}


// find the diff b/w the sum of element at even index or to the sum of odd index

int arr[]={1,2,3,4,6,5};
int sum=0;

 for(int i=0;i<6;i++){
    if(i%2==0){
     sum+=arr[i];
     
    }
    else
    sum-=arr[i];
}

cout<<sum<<endl;

}

//Vector elements that are smaller than its adjacent neighbors:

vector<int> v(6);

for(int i=0;i<6;i++){
    cin>>v[i];
}
int num=v[0];
for(int i=1;i<v.size();i++){
    //  if(num+v[i]==v[i+1]){
        if(v[i+1]==(v[1]+1)){
        cout<<"true"<<endl;
        break;
      }
      else{
      cout<<"false";
      break;
      }

}

//Write a C++ program to capitalize the first character of each element of a given string vector. Return the new vector.

vector<string> color={"r","y","b","g"};

for(int i=0;i<color.size();i++){
    color[i]=toupper(color[i][0]);
    cout<<color[i]<<" ";
}


vector<string> color={"Vineet","Vin"};
 for(int i=0;i<color.size();i++){
    if(toupper(color[i][0])==(color[i]+1) && tolower(color[i][0])==(color[i]+1) ){
          cout<<"true";
    }
    else
    cout<<"false";



vector<int> v;
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
v.push_back(5);

int k=2;
k=k%v.size();
reverse(v.begin(),v.end());
reverse(v.begin(),v.begin()+k); 
reverse(v.begin()+k , v.end()); 

for(int element:v){
    cout<<element<<" ";
}
cout<<endl;



//queries

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




// sort 0's and 1's



void sort( vector <int> &v)
{
    int count;
    for(int ele : &v){
       if(ele==0){
        count++;
    }
    }

    for(int i=0;i<v.size();i++){
        if(i<count){
            v[i]=0;
        }
        else
            {
                v[i]=1;
            }
    }


}

int main(){

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }

    sort();

    for(int i=0;i<n;i++){
        cout<<"sort array :"<<v[i]<<endl;
    }
    
 return 0;


}
*/


