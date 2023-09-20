#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node*next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void insertAtTail(Node*&tail,int  data)
{
    Node*temp=new Node(data);
    tail->next=temp;
   tail=temp;
}
void print(Node*&head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
}
int main()
{

    Node*node1=new Node(98);
     Node*head=node1;
      Node*tail=node1;
    insertAtTail(tail,85);
     insertAtTail(tail,86);
    print(head);
}