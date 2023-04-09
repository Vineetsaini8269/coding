#include<iostream>
#include<vector>
using namespace std;

/*
void sort(vector <int> &v){

    int count =0;

    for(int ele:v){
        if(ele==0){
            count++;
        }
    }

    for(int i=0;i<v.size();i++){
        if(i<count){
            v[i]=0;

        }
        else{
            v[i]=1;
        }
    }
}





int main(){
   
   int n;
   cin>>n;

   vector <int> v;
   for(int i=0;i<n;i++){
      int element ;
      cin >>element ;
      v.push_back(element);

   }

  sort(v);

    for(int i=0;i<n;i++){
        cout<<"sorted array : "<<v[i]<<endl;
    }
   cout<<endl; 

    return 0;
}


void sort(vector<int> &v){
  

  int left_ptr=0;
  int right_ptr=v.size()-1;

  while(left_ptr<right_ptr){
     if(v[left_ptr==1] && v[right_ptr==0]){
        v[left_ptr]=0;
        v[right_ptr]=1;
        left_ptr++;
        right_ptr--;
     }

     if(v[left_ptr]==0){
         left_ptr++;
     }

     if(v[right_ptr]==1){
         right_ptr--;

     }

  }

}



int main(){

 int n;
   cin>>n;

   vector <int> v;
   for(int i=0;i<n;i++){
      int element ;
      cin >>element ;
      v.push_back(element);

   }

  sort(v);

    for(int i=0;i<n;i++){
        cout<<"sorted array : "<<v[i]<<endl;
    }

   cout<<endl; 



    return 0;
}

// sort evennum in left side and odd num in right side


void sort(vector <int> &v){
    
   int left_ptr=0;
   int right_ptr=v.size()-1;

   while(left_ptr<right_ptr){
       
       if(v[left_ptr]%2==1 && v[right_ptr]%2==0){
         swap(v[left_ptr],v[right_ptr]);
         left_ptr++;
         right_ptr--;
       }
       if(v[left_ptr]%2==0){
        left_ptr++;
       }

    if(v[right_ptr]==1){
        right_ptr--;
    }
   }



}

int main(){

    int n;
    cin>>n;

    vector <int> v;

    for(int i=0;i<n;i++){
        int element=0;
        cin>>element;
        v.push_back(element);
    }

    sort();

    for(int i=0;i<n;i++){
        cout<<"sorted arrry :"<<v[i]<<endl;
    }


    return 0;
}



void sort(vector<int> &v){
  
  vector <int> ans;

  int left_ptr=0;
  int right_ptr=v.size()-1;


  while(left_ptr<=right_ptr){
     if(abs(v[left_ptr])<abs(v[right_ptr])){
        ans.push_back(v[right_ptr]*v[right_ptr]);
        right_ptr--;
     }

     else{
        ans.push_back(v[left_ptr]*v[left_ptr]);
        left_ptr++;
     }  

  }
    
  for(int i=0;i<v.size();i++){
        cout<<"sorted array : "<<ans[i]<<endl;
    }

   cout<<endl; 


}



int main(){

 int n;
   cin>>n;

   vector <int> v;
   for(int i=0;i<n;i++){
      int element ;
      cin >>element ;
      v.push_back(element);

   }

  sort(v);

    


    return 0;
}
*/

int main(){




    return 0;

}