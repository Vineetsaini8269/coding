#include<iostream>
using namespace std;

int main(){

    
     char s[]={'m','o','n','o','n','o','m'};
     char result[]={'m','o','n'};
        int count =0; 
     for(int i=0;i<sizeof(s);i++){
        for(int j=i+;j<sizeof(s);j++){
            
           if(s[i]==s[j] ){
             count++;
           }
        }
     }  
     cout<<count;




    return 0;

}