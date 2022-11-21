#include<iostream>
using namespace std;

struct Node{
   int data;
   Node* next;
   };

Node* head;

Node* GetNewNode(int x){
   Node* NewNode = new Node();
   NewNode->data = x;
   NewNode->next = NULL;
   return NewNode;
   }

void InsertAtFront(int x){
  Node* NewNode = GetNewNode(x);
  NewNode->next = head;
  head = NewNode;
  }

void InserAtBack(int x){
  Node* NewNode = GetNewNode(x);
  if (head == NULL){
  head = NewNode;
  return;
}

  Node* temp = head;
  while (temp->next != NULL){
  temp = temp->next;
  }
temp->next = NewNode;

}

void InserAtAnyPosition(int pos, int x){

  Node* NewNode = GetNewNode(x);
  if (pos == 1)
  {
  NewNode->next = head;
  head = NewNode;
  return;
  }
  Node* temp = head;
 for (int i= 1;i<pos-1;i++)
{
temp = temp->next;
}
NewNode->next = temp->next;
temp->next = NewNode;

}

void DeleteAtAnyPosition(int pos){

if (head == NULL){
cout << "Nothing to delete " << endl;
return;
}
Node* temp = head;
if (pos == 1)
{
head = temp->next;
delete temp;
return;
}
for(int i=1;i<pos-1;i++)
{
temp = temp->next;
}
Node* temp2 = temp->next;
temp->next = temp2->next;
delete temp2;
return;
}

void DeleteFirst(){
Node* temp=head;
head->next=head;
delete temp;
}

void DeleteBack(){

Node* temp = head;
Node* temp2 = temp;
int i = 0;
while (temp->next != NULL)
{
if (i > 0)
{
temp2 = temp2->next;
}
temp = temp->next;
++i;
}
temp2->next = NULL;
delete temp;
}

void Display(){
Node* temp = head;
cout << "List : ";
while (temp->next!= NULL)
{
cout << temp->data << " ";
temp = temp->next;
}
cout << endl;
}

void Search(int x){
Node* temp = head;
while (temp->next!= NULL)
{
if (temp->data == x)
{
cout << "Found" << endl;
return;
}
temp = temp->next;
}
cout << "Not found" << endl;
}



int main(){
head = NULL;
InsertAtFront(3);
InsertAtFront(6);
InsertAtFront(8);
Display();
InserAtBack(9);
InserAtBack(12);
Display();
InserAtAnyPosition(2, 12);
Display();
DeleteAtAnyPosition(3);
Display();
Search(12);
Search(100);
DeleteAtAnyPosition(1);
Display();
DeleteBack();
Display();
}
