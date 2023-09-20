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
    int space =2;
    while(space<=i)
    {
        cout<<" ";
        space ++;
    }
       int j=n-i+1;
       while(j)
       {
        cout<<"*";
        j--;
       }
    
        cout<<endl;
        i++;
    }
}