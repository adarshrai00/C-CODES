#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<string>a;
    a.push("adarsh");
    a.push("rai");
    a.push("sahab");
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;
    a.pop();
    cout<<a.front()<<endl;
    cout<<a.size();
}