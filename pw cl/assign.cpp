#include<iostream>
#include<cstdlib>
using namespace std;
// vineet saini


   
int main(){

//1. - Write a program which takes the values of length and breadth from user and check if it is
//a square or not

int length;
cin>>length;
int breadth;
cin>>breadth;



if(length==breadth){
  cout<<"it is square ";
}
else
cout<<"it is rectangle ";
 

 //  4   5  o/p -it is rectangle

 //Write a program to print absolute value of a number entered by the user.

 int n;
  cin>>n;
  
  cout<<"absolute value of n is : "<<abs(n);

  //  -1
 //   absolute value of n is : 1


 //3. -Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and
  //  calculate Profit or Loss.

  int cp;
  cout<<"enter the cost : ";
  cin>>cp;
  int sp;
  cout<<"enter the selling : ";
  cin>>sp;

  int profit=sp-cp;
  int loss=-cp-sp;

  if(sp>cp){
    cout<<" profit : "<< profit;
  }
  else if(cp>sp){
   cout<<"loss : "<<loss;
  }
   else{
      cout<<" no profit & loss ";
       }

 //enter the cost : 4000
 //enter the selling : 9560
 // profit : 5560


// 4. -Write a program to print positive number entered by the user, if user enters a negative
   //   number, it is skipped.


   int n;;
   cout<<"enter the number : ";
   cin>>n;

   if(n>0){
    cout<<"positive number : "<<n;
   }
   else 
   cout<<"number is negative, it is skipped ";


   //    enter the number : -6
   //   number is negative, it is skipped



   //5. -Create a calculator using switch statement to perform addition, subtraction, multiplication
     //   and division.

    char op;
  float num1, num2;

  cout << "Enter operator: +, -, *, /: ";
  cin >> op;

  cout << "Enter two operands: ";
  cin >> num1 >> num2;

  switch(op) {

    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    default:
      // If the operator is other than +, -, * or /, error message is shown
      cout << "Error! operator is not correct";
      break;
  }

//Enter operator: +, -, *, /: +
 // Enter two operands: 5 6
 //5 + 6 = 11


//6.Write a program to calculate marks to grades . Follow the conversion rule as given below :

int marks;

cout<<"enter the marks : ";
cin>>marks;

if(marks>=90 && marks<=100){
  cout<<"your grade is : A+";
}
else if(marks>=80 ){
  cout<<"your grade is : A";
}
else if(marks>=70 ){
  cout<<"your grade is : B";
}
else  if(marks>=60 ){
  cout<<"your grade is : C";
}
else if(marks>=50 ){
  cout<<"your grade is : D ";
}
else if(marks>=40 ){
  cout<<"your grade is : D ";
}
else if(marks>=30 ){
  cout<<"your grade is : E  ";
}
else {
  cout<<"your grade is : F ";
}

return 0;
}


//   enter the marks : 98
//  your grade is : A+


