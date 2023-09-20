#include<iostream>
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
void InsertAtTail(Node*&tail,int data)
{
   Node*temp= new Node(data);
   tail->next=temp;
   tail=temp;

}
void InsertAtHead(Node*&head,int data)
{
    Node*temp=new Node(data);
    temp->next=head;
    head=temp;
}
void DeletAtpos(Node*&head,int position)
{
    int p=position;
    Node*temp=head;
    int cnt=1;
    if (p=1)
    {
        head=temp->next;

    }
    else{
    while(cnt<p-1)
    {
       temp=temp->next;
        cnt++;
    }
    temp->next=temp->next->next;
    }}
void InsertAtPosition(Node*head,int position,int data)
{
    int pos=position;
    Node*temp=head;
    int cnt=1;
    while(cnt<pos-1)
    {
        temp=temp->next;
        cnt++;
    }
    Node* newnode=new Node(data);
    newnode->next=temp->next;
    temp->next=newnode;
    
}

void print(Node*head)
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
    Node*node1=new Node(24);
    Node*head=node1;
     Node*tail=node1;
     InsertAtTail(tail,55);
     InsertAtHead(head,85);
     InsertAtPosition(head,2,55);
    print(head);
    DeletAtpos(head,1);
    cout<<endl;
    print(head);

}