#include<iostream>
using namespace std;

int gcd(int a,int b){
  
   if(b>a)return gcd(b,a);
   // base case
   if (b==0)return a;
   //  asumption
   return gcd(b,a%b);


}

int main(){

   int ans=gcd(50,10);
   cout<<ans;

    return 0;
}