#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int sum;
    int a=0;
    int b=1;
    cout<<a<<endl<<b<<endl;
    for(int i=0;i<=n;i++)
    {
      sum=a+b;
      cout<<sum<<endl;
      a=b;
      b=sum;

    }
}