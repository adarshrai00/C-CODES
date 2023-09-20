#include<iostream>
using namespace std;
int main()
{
    int arr[15],pos,size;
    cout<<"enter the size of array";
    cin>>size;
    cout<<"enter the elements of array";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the position at which element to delete ";
    cin>>pos;
    for(int j=pos-1;j<size-1;j++)
    {
        arr[j]=arr[j+1];
      
    }
    size--;
    for(int k=0;k<size;k++)
    {
        cout<<arr[k];
    }
}