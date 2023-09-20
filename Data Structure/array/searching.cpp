#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,3,1,6,4,5};
    int size=sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            cout<<"element found at pos"<<i+1;
        }
    }
}