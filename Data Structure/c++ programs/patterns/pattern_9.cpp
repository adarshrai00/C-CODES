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
        int count =i;
        int j=1;
        while(j<=i)
        {
            cout<<count;
            count--;
            j++;
        }
        cout<<endl;
        i++;
    }
}