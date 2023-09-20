#include<iostream>
using namespace std;
int main()
{
    int arr[50],size,pos,num;
    cout<<"enter the size of array";
    cin>>size;
    cout<<"enter array";
    for(int i =0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the pos to insert element";
    cin>>pos;
    cout<<"enter the number to insert";
    cin>>num;
    for(int j=size-1;j>=pos-1;j--)
    {
       arr[j+1]=arr[j];
    }
    arr[pos-1]=num;
    size++;
    for(int k=0;k<size;k++){
    cout<<arr[k];}
}