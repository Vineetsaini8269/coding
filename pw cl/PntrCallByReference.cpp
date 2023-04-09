#include<iostream>
using namespace std;


  // swap the num
/*
     void swap(int x,int y){
            //craete copy of x and y and all change in new buket that the value will not change
        int temp=x;
         x=y;
         y=temp;

     }

int main(){

      int x=10;
      int y=20;

      swap(x,y); /// call by value
      cout<<x<<" "<<y;
     // 10,20





    return 0;
}
*/

  // swap with pointer 
void swap(int *x,int *y){
            // it show address of p1 and p2 in   cpoies of *x and *y in new buket that the value will change
        int temp= *x; // derefrening the buket
         *x= *y;
         *y=temp;

     }

int main(){

      int x=10;
      int y=20;
      int *p1=&x;
      int *p2=&y;

      swap(p1,p2); /// call by value
      cout<<x<<" "<<y;
     // o/p- 20, 10 
    return 0;
}



