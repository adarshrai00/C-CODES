#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a;
    // to find the capacity of vector and it  tell tumber of space assigned 


    cout<<"capacity is  "<<a.capacity()<<endl;

    a.push_back(5);
    cout<<"capacity is  "<<a.capacity()<<endl;

     a.push_back(4);
    cout<<"capacity is  "<<a.capacity()<<endl;

     a.push_back(3);
    cout<<"capacity is  "<<a.capacity()<<endl;
    //size tell  number  of element a vector has
    cout<<a.size()<<endl;
    cout<<a[1]<<endl;
    //to print the front and back element
    cout<<"front is  "<<a.front()<<endl;
    cout<<"back is  "<<a.back()<<endl;
 // to remove element
    a.pop_back();
    for(int i:a)
    {
        cout<<i<<"\t";
    }
    cout<<endl;
    // a.clear();
   cout<<a.size();
   // to copy 1 vector to other 
   vector<int> b(a);
   for(int i:b)
   cout<<i<<endl;
}