#include<iostream>
using namespace std;

// find n natural number without using loops

void f(int n){

    if(n<1) return ;

    f(n-1);
    cout<<n<<" ";
}



int main(){
     
      f(10);

    return 0;
}
