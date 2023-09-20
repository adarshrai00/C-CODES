#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,1,7,6,3,8};
int size=sizeof(arr)/sizeof(int);
for(int i=0;i<size-1;i++)
{
    for(int j=0;j<size-1-i;j++)
    {
if(arr[j]>arr[j+1])
{
    swap(arr[j],arr[j+1]);
}
    }
}
for(int i=0;i<size;i++)
{
    cout<<arr[i];
}
}