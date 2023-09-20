#include<iostream>
using namespace std;
void funct(int arr[],int size){
    for (int i=0;i<size;i+=2)
    {
      if(i+1<size)
       swap(arr[i],arr[i+1]);
    }
   
}
int main()
{
    int arr[]={2,3,4,5,6};
    int size=sizeof(arr)/sizeof(int);
    funct(arr,size);
     for (int j=0;j<size;j++)
    {
      cout<<arr[j];
    }
}