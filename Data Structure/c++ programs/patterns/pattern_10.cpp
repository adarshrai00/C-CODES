#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int i=1;
    char a='A';
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<a;
            j++;
        }
        cout<<endl;
        a++;
        i++;
    }
}