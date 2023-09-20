#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l;
    l.push_back(2);
     l.push_back(5);
      l.push_back(4);
       l.push_back(3);
        l.push_back(7);
        for(int i:l)
        cout<<i<<"\t";
       cout<<endl;
       l.pop_back();
         for(int i:l)
        cout<<i<<"\t";
        cout<<endl;
        l.erase(l.begin());
         for(int i:l)
        cout<<i<<"\t";
        cout<<"element present or not"<<l.count(2);
}