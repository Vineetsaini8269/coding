#include<iostream>
#include<Vector>
using namespace std;

/*
void runningsum(vector <int> &v){

for(int i=1;i<v.size();i++){
    v[i]+=v[i-1];
}
  return;
}

int main(){

int n;
cin>>n;

vector<int> v;

for(int i=0;i<n;i++){
     int ele ;
     cin>>ele;
     v.push_back(ele);
  }

  runningsum(v);

  for(int i=0;i<n;i++){
     cout<<v[i]<<" ";
    }

  cout<<endl;

    return 0;
}


// running multipal array

void runningmultiple(vector <int> &v){

    for(int i=1;i<v.size();i++){

        v[i]-=v[i+1];
    }


    return;
}

int main(){

     int n;
     cin>>n;

     vector<int> v;

     for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
     }

     runningmultiple(v);

     for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
     }
      cout<<endl;



    return 0;
}


//check prefix suffix sum

  bool checkprefixsuffixsum(vector<int> &v){

    int total_sum=0;
    for(int i=0;i<v.size();i++){
        total_sum+=v[i];
    }

    int prefix_sum=0;
    for(int i=0;i<v.size();i++){
        prefix_sum+=v[i];
        int sufix_sum=total_sum-prefix_sum;
        if(sufix_sum==prefix_sum){
            return true;
        }
    }
    return false;
}

int main(){

    int n;
    cin>>n;
       vector<int> v;

    for(int i=0;i<n;i++){
        int ele=0;
        cin>>ele;
        v.push_back(ele);
    }
      

    cout<<checkprefixsuffixsum(v);
    


   
    return 0;
}

// queries sum

int main(){

    int n;
    cin>>n;
     vector<int> v(n+1,0);

     for(int i=1;i<=n;i++){
        cin>>v[i];

     }

       // calculate prefixsumarray

    for(int i=1;i<=n;i++){
         v[i]=v[i-1];
    }
  
    int q;
    cout<<"enter quries :";
    cin>>q;

    while(q--){

        int r,l;
        cout<<"enter r:"<<"enter l :";
        cin>>r>>l;
        
        int ans=0;
        //ans=prefinsumarray[r]-prefixsumarray[l-1]

        ans=v[r]-v[l-1];
        cout<<ans<<endl;
    }
 
      return 0;
}
*/

// sumsubarray 


bool checkprefixsufixsum(vector <int> &v){


    int total_sum=0;
     for(int i=0;i<v.size();i++){
        total_sum+=v[i];
     }
   
    int prefix_sum=0;
    for(int i=0;i<v.size();i++){
        
        prefix_sum+=v[i-1];
        int sufix_sum=total_sum-prefix_sum;
        if(sufix_sum==prefix_sum){
            return true;
        }
    }
   return false;

}

int main(){
          
   int n;
   cin>>n;

   vector<int> v;
  for (int i=0;i<n;i++){
    int ele;
    cin>>ele;
    v.push_back(ele);
  }
  checkprefixsufixsum(v);

    return 0;
}