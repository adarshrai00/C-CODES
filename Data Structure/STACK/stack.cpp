#include<iostream>
using namespace std;
 
 class stack
 {
    int *arr;
     int size;
     int top;
     public:
     stack(int size)
     {
        this->size=size;
        arr= new int[size];
        top=-1;
     }
     void push(int data)
     {
        if(top<size-1){
        top++;
        arr[top]=data;}
        else
        cout<<"overflow";
     }
     void pop()
     {
        if(top>=0)
        {
            top--;
        }
        else
        cout<<"stack underfloww";

     }
     int peek()
     { if(top>=0 && top<size)
        return arr[top];  
        else
        cout<<"stackis empty"; 
     }
     bool isempty()
     {
        if(top==-1)
        return true;
        else 
        return false;
     }
     void print()
     {
        for(int i=0;i<=top;i++)
        {
            cout<<arr[i];
            
        }

     }
 };
 int  main()
 {
    stack sc(5);
    sc.push(5);
    sc.push(2);
    sc.push(8);
    sc.push(7);
    sc.pop();
   cout<< sc.peek()<<endl;
sc.print();

 }