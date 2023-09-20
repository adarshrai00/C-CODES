#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string>m;
    m[1]="adarsh";
    m[17]="sahab";
    m.insert({2,"rai"});
     for(auto i:m)
    cout<<i.first<<"\t";
    cout<<endl;
    for(auto i:m)
    cout<<i.first<<i.second<<endl;
    cout<<endl;
    cout<<"finding element  "<<m.count(17)<<endl;
    m.erase(2);
    for(auto i:m)
    cout<<i.first<<"\t";
    cout<<endl;
}
