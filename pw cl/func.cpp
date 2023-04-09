#include <iostream>
#include<math.h>
using namespace std;

//function 

// square of first 5 natural num
/*int square(int x){
    return (x*x);
}

int main(){
    for(int i=1;i<=5;i++){
        cout<<square(i)<<endl;
    }
}


//wap to check area and circum of a circle
int area(float r){
    return(3.14*r*r);
}

int circum(float r){
    return(2*3.14*r);
}

int main(){
    cout<<"area of circle :"<<area(3.5)<<endl;
    cout<<"circum of circle :"<<circum(3.6);
}


//wap to check the person is eligible or not

  bool checkeligible(int age,int limit){
    if(age>limit){
        return true;
    }
    else{
        return false;
    }
  }


int main(){
    int vote=18;
    int eligible =checkeligible(20,vote);
    if(eligible){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}

//wap to print all odd number b/w them

bool isodd(int num){
    if(num%2==0){
        return false;

    }
    else{
        return true;
    }
}

int main(){
    int a =1;
    int b=10;
for(int i=a;i<=b;i++){
    if(isodd(i)){
        cout<<i<<endl;
    }
    
}

    return 0;
}

// wap to print all prime number b/w a and b

 bool isprime(int num){
    for(int i=2;i<sqrt(num);i++){
        if(num%i==0){
            return false;
        }
        else{
            return true;
        }
    }

}

int main(){
    int a=2,b=100;
    for(int i=a;i<=b;i++){
        if(isprime(i)){
            cout<<i<<endl;
        }
    }
}


// Scope of varible

int c=5;
void fun(){
   // int b=5;
    cout<<c;
}
int main(){
   // int c=10;
    { int c=3.5;
   // cout<<c;
    }

    cout<<c;

    return 0;
}


// default value

int fun(int x,int z=0){
    cout<<x<<" "<<z;
}
int main(){
    fun(10);
    return 0;
}


// call by value or copy a value

void swap(int x , int y){
    int temp = x;
    x = y;
    y=temp;
}
int main(){
    int i=5 , j=6;
    swap(i,j);
    cout<<i<<" "<<j<<"\n";
    return 0;
}
*/

// call by refrence
/*
int main(){
    int x=10;
    int &y=x;
    cout<<x<<" "<<y<<endl;
    y=20;
    cout<<x<<" "<<y;
}

// decrease function

void decrease(int n1,int n2){
    n1--;
    n2=n2-2;
    cout<<n1<<" "<<n2<<endl; // pass by value 
}
int main(){
    int p=26;
    int q=13;
    decrease(p,q);
     // create copy of p and q;
    cout<<p<<" "<<q;
    return 0;
}

//practice question
    // call by value 
void makeTwice(int p){
    p=p * 2;
    cout<<p<<endl;

}
int main(){
    int p=24;
    makeTwice(p);
    cout<<p;// create copy 
   
}


//Write a C++ program to compute the sum of the two given integer values. If the two values are the same, then return triple their sum

int sum(int x,int y){
    return(x==y)?(x+y)*3 : (x+y); 
}
int main(){
  cout<<  sum(1,3)<<endl;
   cout<< sum(2,3)<<endl;
    cout<<sum(2,2);
    return 0;

}

//Write a C++ program to get the absolute difference between n and 51. If n is greater than 51 return triple the absolute difference.

int value(int n){
    return(n>51) ? (n-51)*3 : (51-n);
}
int main(){
  cout<<  value(53)<<endl;
   cout<< value(30)<<endl;
    cout<<value(51);
    return 0;
}

//Write a C++ program to check two given integers, and return true if one of them is 30 or if their sum is 30

bool value(int x,int y){
    if(x==30 || y==30 || x+y==30){
    return true;
    }
    else
    {
        return false;
    }
}
int main(){
    cout<<value(30,0)<<endl;
    cout<<value(0,30)<<endl;
    cout<<value(20,10)<<endl;
    cout<<value(40,0);
}

//Write a C++ program to check a given integer and return true if it is within 10 of 100 or 200

bool value(int n){
    if (abs(n-100)<=10|| abs(n-200)<=10){
        return true;
        
    }
    else 
    return false;
}
int main(){
    cout<<value(103)<<endl;
    cout<<value(95)<<endl;
    cout<<value(20)<<endl;
    cout<<value(40);
}

//Write a C++ program to create a new string where 'if' is added to the front of a given string. If the string already begins with 'if', return the string unchanged.

string test(string s){
    if(s.length()>2 && s.substr(0,2)>"if")
    {
        return s;
    }
    else
    return "if"+s;
}
int main(){
    cout<<test(" if else")<<endl;
    cout<<test(" else");
    return 0;
}


//Write a C++ program to remove the character in a given position of a given string. The given position will be in
string test(string str ,int n)
{
 return str.erase(n,1);

}
int main(){
    cout<<test("vineet",0)<<endl;
    cout<<test("vineet",1)<<endl;
    cout<<test("vineet",2)<<endl;
    cout<<test("vineet",3);
}

//Write a C++ program to exchange the first and last characters in a given string and return the new string
string test(string str)
{
 return str.length() > 1
                ? str.substr(str.length() - 1) + str.substr(1, str.length() - 2) + str.substr(0, 1) : str;

}
int main(){
    cout<<test("vineet")<<endl;
}


// Write a C++ program to check if a given positive number is a multiple of 3 or a multiple of 7

bool value(int x){
    if(x%3==0 || x%7==0){
    return true;
    }
    else
    {
        return false;
    }
}
int main(){
    cout<<value(30)<<endl;
    cout<<value(21)<<endl;
    cout<<value(20)<<endl;
}


//Write a C++ program to check if a given string starts with 'C#' or not

bool value(string str){
    return (str.length() < 3 && str=="C#") || (str.substr(0,2)=="C#" && str[2] == ' ');
}
int main(){
    cout<<value("c#")<<endl;
    cout<<value("cpp")<<endl;
    cout<<value("java")<<endl;
}


//Write a C++ program to check if one given temperatures is less than 0 and the other is greater than 100. 


bool test(int temp1, int temp2)
        {
            return temp1 < 0 && temp2 > 100 || temp2 < 0 && temp1 > 100;
        }
        
int main() 
 {
  cout << test(120, -1) << endl;  
  cout << test(-1, 120) << endl;  
  cout << test(2, 120) << endl;  
  return 0;    
}

// Write a C++ program to check two given integers whether either of them is in the range 100..200 inclusive. 

bool test(int n1,int n2){
  return n1>100 && n2<200;
}
int main() 
 {
  cout << test(120,130) << endl;  
  cout << test(31, 120) << endl;  
  cout << test(120, 2520) << endl;  
  return 0;    
}

//Write a C++ program to check whether three given integer values are in the range 20..50 inclusive. Return true if 1 or more of them are in the said range otherwise false
bool test(int x , int y , int z){
  return (x>=20 && x<=50) ||  (y<=20 && y<=50) || (z>=20 && z<=50);
}
int main() 
 {
  cout << test(20,30,30) << endl;  
  cout << test(31, 12,12) << endl;  
  cout << test(12, 20,45) << endl;  
  return 0;    
 }

 //Write a C++ program to check whether two given integer values are in the range 20..50 inclusive. Return true if 1 or other is in the said range otherwise false.
bool test(int x , int y ){
  return (x>=20 && x<=50) ||  (y<=20 && y<=50) ;
}
int main() 
 {
  cout << test(20,30) << endl;  
  cout << test(31, 12) << endl;  
  cout << test(12, 20) << endl;  
  return 0;    
 }

//Write a C++ program to check the largest number among three given integers.

int largest(int x,int y,int z){
    if(x>y && x>z){
        return x;
    }
    else if(y>z)
    return y;
    else
    return z;
}
int main(){
  cout<<largest(1,2,3)<<endl;
  cout<<largest(1,5,3)<<endl;
  cout<<largest(4,2,3);
        }

// Write a C++ program to check which number nearest to the value 100 among two given integers. Return 0 if the two numbers are equal.

int num(int x,int y){
    if(x<100 && y<100 && x>y)
        return x;
        else if(x<100 && y<100 && x<y)
        return y;
        else
        return 0;
}
int main(){
    cout<<num(75,85)<<endl;
    cout<<num(102,285)<<endl;
    cout<<num(99,99);
    
}

// Write a C++ program to check if two given non-negative integers have the same last digit. Go to the editor

bool last(int x,int y){
    return  x % 10==y%10 ? true :false;
}
int main(){
    cout<<last(13,3);
    cout<<last(12,3);
    cout<<last(16,26546);
}


//Write a C++ program to compute the sum of the two given integers. If the sum is in the range 10..20 inclusive return 30

int last(int x,int y){
    return  x+y >=10 && x+y<= 20 ? 30 : x+y ;
}
int main(){
    cout<<last(13,3)<<endl;
    cout<<last(12,3)<<endl;
    cout<<last(146,26);
}


// Write a C++ program that accept two integers and return true if either one is 5 or their sum or difference is 5.

int last(int x,int y){
    return  x==5 || y==5 || x+y==5 | abs(x-y)==5;
     }


int main(){
    cout<<last(1,3)<<endl;
    cout<<last(5,3);
    return 0;
}
  //Write a C++ program to check if a given non-negative number is a multiple of 3 or 7, but not both.
  void last(int x){
    return    x%3==0 ^ x%7==0  ?  true :false;
     }


int main(){
    cout<<last(3)<<endl;
    cout<<last(21);
    return 0;
}
*/

//Write a C++ program to check if a given number is within 2 of a multiple of 10
bool last(int n){
       return n % 10 <= 2 || n % 10 >= 8;
     }


int main(){
    cout<<last(5)<<endl;
    cout<<last(21);
    return 0;
}