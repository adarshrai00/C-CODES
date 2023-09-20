#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,3,4,5,6};
    int end=sizeof(arr)/sizeof(int);
    end=end-1;
    int start=0;
    int key;
    cin>>key;
    int cnt=0;
    while(start<=end)
    {   
        int mid=(start+end)/2;

        if(arr[mid]==key)
        {
            cout<<"element found at pos"<<mid+1;
            cnt++;
            break;
        }
        else if(key>arr[mid])
        start=mid+1;
        else if(arr[mid]>key)
        end=mid-1;
    }
    if(cnt==0){
        cout<<"NOT FOUND";
    }
}