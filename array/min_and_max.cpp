#include <bits/stdc++.h>
using namespace std;
int getMax(int num[],int size)
{
    int maxa=INT_MIN;
    for(int i=0;i<size;i++)
    {
        maxa= max(maxa,num[i]);
    }
    return maxa;
}
int getMin(int num[],int size)
{
    int mini=INT_MAX;
    for(int i=0;i<size;i++)
    {
        mini=min(mini,num[i]);
    }
    return mini;
    return mini;
}
int main()
{
    int arr[50],size;
    cout<<"enter the size of array ";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];

    }
    cout<<"max number is"<<getMax(arr,size)<<endl;
    int sum =getMax(arr,size)+getMin(arr,size);
    cout<<sum;
}