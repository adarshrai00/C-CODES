#include<iostream>
using namespace std;
int BinarySearch(int arr[],int size, int key)
{
 int start=0;
 int end=size-1;
 int mid = (start+end)/2;
 if(arr[mid]==key)
 return mid;
 else if(arr[mid]>key)
  end=mid-1;
  else{
    start=mid+1;
  }
  return -1;
}
int main()
{
    int arr[]={1,5,8,9,12,45,67,78};
    int size=sizeof(arr)/sizeof(int);
    int key=124;
    int index=BinarySearch(arr,size,key);
    if(index>=0)
    cout<<"position is"<<index;
    else
    cout<<"elemrnt not found";
}