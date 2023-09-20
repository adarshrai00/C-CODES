#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n ";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int count=1;
        int j=n-i+1;
       while(j)
       {
        cout<<count<<" ";
        count++;
        j--;
       } 
       int star=i-1;
       while(star)
       {
        cout<<"*"<<" ";
        star--;
       }
       int star1=i-1;
       while(star1)
       {
        cout<<"*"<<" ";
        star1--;
       }
       int num=n-i+1;
       while(num)
       {
        cout<<num<<" ";
        num--;
       }
       cout<<endl;
       i++;
    }
}