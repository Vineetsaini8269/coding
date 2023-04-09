#include<iostream>
using namespace std;

string f(string &s,int idx,int n){

    if (idx==n){
        return "";
 
    }
    string curr="";
    curr+=s[idx];
}
int main(){
    string s="abcax";
    int n=5;
    cout<<f(s,0,n);
    
return 0;
}
