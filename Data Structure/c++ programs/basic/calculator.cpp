#include<iostream>
using namespace std;
int main()
{
int a,b; char 6n;
cout<<"enter the number ";
cin>>a>>b;
cout<<"enter the operation to perform";
cin>>n;
switch(n)
{
    case '+':
    cout<<a+b<<endl;
    break;
    case '-': cout<<a-b<<endl;
    break;
    case '*': cout<<a*b<<endl;
    break;
    case '/': cout<<a/b<<endl;
    break;
    case '%': cout<<a%b<<endl;
    break;
default : cout<<"not valid entry";
}
}