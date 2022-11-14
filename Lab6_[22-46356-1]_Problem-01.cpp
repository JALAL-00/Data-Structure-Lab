#include<iostream>
using namespace std;
class Queue{
int queue[10];
int front=-1, rear=-1;

public:
    bool isEmpty()
    {
        if(front==-1 && rear==-1 )
        {
            return true;
        }
        else
        {

            return false;
        }
    }
  bool isFull()
  {
      if(rear==10-1)
      {
          return true;
      }
      else
      {
          return false;
      }
  }

  void enqueue(int element)
  {
      if(isFull()==true)
      {
          cout<<"can't push"<<endl;

      }
      else if(isEmpty()==true)
      {
        front=0;
        rear=0;
        queue[rear]=element;

      }
      else
      {
          rear++;
          queue[rear]=element;
      }
  }
  void dequeue()
  {
      if(isEmpty()==true)
      {
          cout<<"can't dequeue"<<endl;
      }
      else if(front==rear)
      {
          front=-1;
          rear=-1;
      }
      else
      {
          front++;
      }
  }

  void display()
  {
      if(isEmpty()==true)
      {
          cout<<"can't display"<<endl;
      }
      else
      {
          for(int i=front;i<=rear;i++)
          {
              cout<<queue[i]<<endl;
          }
      }
  }

 

};
int main()
{
    Queue q;
    q.enqueue(11);
    q.enqueue(22);
    q.enqueue(33);
    q.enqueue(10);
    q.enqueue(500);
    q.dequeue();
    q.dequeue();
    q.display();

}