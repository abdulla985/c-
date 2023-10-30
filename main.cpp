#include<iostream>
using namespace std;
int main(){
double a,b;
char op;
cout<<"enter first number ";
cin>>a;
cout<<"enter operator ";
cin>>op;
cout<<"enter second number ";
switch (op){
  case '+':
  cout<<a+b;
  break;
  case '-':
  cout<<a-b;
  break;
  case '*':
  cout<<a*b;
  break;
  case '/':
  cout<<a/b;
  break;
}
return 0;
}
