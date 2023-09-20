#include<iostream>
using namespace std;
int linear(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        return i;
    }
    
    
    return -1; 
}
int main()
{
    int arr[]={2,5,3,4,6,7};
    int size=sizeof(arr)/sizeof(int);
    int key=7;
    int search=linear(arr,size,key);
    if(search>=0)
    {
        cout<<"data found "<<search+1;
    }
    else 
    cout<<"data not found";
    
    }
