#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n";
    cin >> n;
    bool isprime=1;
    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            //  not prime
            isprime=0;
            break;}
        i++;
    }
    if(isprime==0)
    {
        cout<<"it is not prime";

    }
    else
   cout<<"it is  prime";
}