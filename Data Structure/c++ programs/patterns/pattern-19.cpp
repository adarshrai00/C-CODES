#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter the value of n";
cin>>n;
int i=1;
while(i<=n)
{
   int count=1;
    int space=n-i;
    while(space)
    {
        cout<<" ";
        space--;

    }
    int j=1;
    while(j<=i)
    {
     cout<<count;
     count++;
     j++;
    }
    int start=i-1;
    while(start)
    {
        cout<<start;
        start--;
    }
    cout<<endl;
    i++;
}
}