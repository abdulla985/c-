#include<iostream>
using namespace std;
int main(){
float a,b,
char op,
cout<<"enter first number "<<endl;
cin>>a;
cout<<"enter operator "<<endl;
cin>>op;
cout<<"enter second number "<<endl;
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
  break:
}
return 0;
}
