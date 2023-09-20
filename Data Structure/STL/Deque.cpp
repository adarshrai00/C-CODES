#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int>a;
    a.push_back(2);
        a.push_back(3);
         a.push_back(4);
          a.push_front(5);
          for(int i:a)
          cout<<i<<"\t";
          cout<<endl;
          cout<<a[2]<<endl;
          cout<<"front element is  "<<a.front()<<endl;
          cout<<"back element is  "<<a.back()<<endl;
        a.pop_front();
        for(int i:a)
        cout<<i<<"\t";
        cout<<endl;
        a.pop_back();
        for(int i:a)
        cout<<i<<"\t";
        cout<<endl;
        // cout<<a.begin()<<endl;
      a.erase(a.begin(),a.begin()+1);
        



}