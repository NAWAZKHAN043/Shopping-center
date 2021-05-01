#include <iostream>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;


struct Node
{
string cname;

Node *link;
};

Node *front = NULL;
Node *rear = NULL;

bool isempty()
{
 if(front == NULL && rear == NULL)
 return true;
 else
 return false;
}


void enqueue ( string name )
{
 Node *ptr = new Node();
 ptr->cname= name;
 ptr->link = NULL;

 if( front == NULL )
 {
  front = ptr;
  rear = ptr;
 }
 else
 {
  rear ->link = ptr;
  rear = ptr;
 }
}


void dequeue ( )
{
 if( isempty() )
 cout<<"Queue is empty\n";
 else

 if( front == rear)
 {
  free(front);
  front = rear = NULL;
 }
 else
 {
  Node *ptr = front;
  front = front->link;
  free(ptr);
 }
}


void showfront( )
{
 if( isempty())
 cout<<"Queue is empty\n";
 else
 cout<<"element at front is:"<<front->cname<<"\n";
}


void displayQueue()
{
 if (isempty())
  cout<<"Queue is empty\n";
 else
 {
  Node *ptr = front;
  while( ptr !=NULL)
  {
   cout<<"\t"<<ptr->cname<<"\t  "<<endl;
   ptr= ptr->link;

  }
 }
}

