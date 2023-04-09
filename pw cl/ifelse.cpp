#include<iostream>
using namespace std;
int main(){
     
      int n;
    //  cout<<"enter the number :";
     // cin>>n;
     /*if(n%2==0)
      {
            cout<<"even no";
      }
      else
      {
        cout<<"odd num";
      }
  
     if(n%2==0 ? cout<<"even"<<endl :cout<<"odd"<<endl);
     if(n==0 ? cout<<"zero"<<endl : cout<<"integer"<<endl);
     if(n%10>0 ?cout<<"once place"<<endl :cout<<"zero palce");*/
     int marks;
     cout<<"marks :";
     cin>>marks;
    // if( marks>33 ? cout<<"pass" << endl : cout<<"fail");
     if(marks>80){
      cout<<"passin honour division";
     }
     else if(marks>60){
         cout<<"paass in first division";

     }
     else if(marks>45){
      cout<<"pass in 2nd division";
     }
     else if(marks>33){
        cout<<"pass in 3rd division";

     }
     else
     {
      cout<<"fail";
     }
}
    



