#include<iostream>
using namespace std;
int main()
{
    char ch ='a';
    if (ch >= 'A' && ch <= 'Z')
        cout << ch << " is an UpperCase character\n";
 
    else if (ch >= 'a' && ch <= 'z')
        cout << ch << " is an LowerCase character\n";
}