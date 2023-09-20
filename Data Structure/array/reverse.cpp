#include<iostream>
using namespace std;
void reverse(int arr[],int size)
{
    int start=0;
    int end=size-1;
    while(end>start)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
    void print(int arr[],int size)
    {
        for(int i=0;i<size;i++)
        {
            cout<<arr[i];
        }
    }

int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int size  =sizeof(arr)/sizeof(int);
    reverse(arr,size);
    print(arr,size);
    
}