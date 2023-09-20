// it always printelement in shorted form and if we give element multiple time the it will print that single time 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>a;
    a.insert(1);
    a.insert(5);
    a.insert(2);
    a.insert(3);
    a.insert(0);
    for(int i:a)
    cout<<i<<"\t";
    cout<<endl;
    a.erase(a.begin());
     for(int i:a)
    cout<<i<<"\t";
    cout<<endl;
    //count tell whethere element present or not
    cout<<"element present or not"<<a.count(5)<<endl;

}