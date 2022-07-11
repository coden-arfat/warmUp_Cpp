
/* This program will cheak even or odd"*/

#include <bits/stdc++.h>
using namespace std ;

string evenOdd(int a){
  string result ;
  if(a%2==0){
     result = "yes";
  }else{
    result="no";
  }
  return result ;
}
int main(){
int a;
cout<<"enter number : ";
cin>>a;
cout<<evenOdd(a)<<endl ;
  return 0;
}