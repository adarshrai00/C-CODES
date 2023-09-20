#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void print(Node*head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
}
void insertAtTail(Node*&tail,int  data)
{
    Node*temp=new Node(data);
    tail->next=temp;
   tail=temp;
}
void InsertAtposition(Node*head,int position,int data)
{
Node*temp=head;
int p=position;
int count=1;
while (count<p-1)
{
    temp=temp->next;
    count++;
}
//initiliaing new node
Node*nodeToInsert=new Node(data);
nodeToInsert->next=temp->next;
temp->next=nodeToInsert;

}
int main()
{
    Node*node1=new Node(12);
    Node*head=node1;
     Node*tail=node1;
     insertAtTail(tail,55);
      insertAtTail(tail,57);
    print(head);
    cout<<endl;
    InsertAtposition(head,2,5);
   print(head);
}