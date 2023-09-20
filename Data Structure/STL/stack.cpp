#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<string>a;
    a.push("adarsh");
    a.push("rai");
    cout<<"size of stack is"<<a.size();
    cout<<endl;
    cout<<a.top();
    a.pop();
    cout<<a.top();

}