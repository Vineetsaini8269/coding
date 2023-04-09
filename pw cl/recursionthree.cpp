#include<iostream>
using namespace std;

// calculate the sum of first (n-1) natural num with alternate sign 
int f(int n){

  if (n==0) return 0;

  return f(n-1)+((n%2==0)?(-n):(n));

}

int main(){

    cout<<f(10)<<"\n";

    return 0;
}