#include<stdio.h>
#include<iostream>
using namespace std;
struct node{
    node *prev;
    int item;
    node *next;
};

class Deque
{
private:
   node *front;
   node *rear;

    
public:
    Deque();
    Deque(Deque &d){
        
        node *t =d.front;
        while (t!=NULL)
        { 
            if(front==NULL)
           {
               insertAtFront(t->item);
               t=t->next;
           }
           else
           {
               insertAtRear(t->item);
               t=t->next;

           }
        }
        
    }
    ~Deque();
    void insertAtRear(int val){
       node *temp=new node;
       temp->prev= NULL;
       temp->item=val;
       temp->next=NULL;
        if(rear==NULL){
            front=temp;
            rear=temp;

        }
        else{
            rear->next=temp;
            temp->prev=rear;
            rear=temp;
            temp=NULL;
        }
    }

    void insertAtFront(int val){
       node *temp=new node;
       temp->prev= NULL;
       temp->item=val;
       temp->next=NULL;
        if(front==NULL){
            front=temp;
            rear=temp;

        }
        else{
            front->prev=temp;
            temp->next=front;
            front=temp;
        }

    }

    void deleteFront(){
        if(front->next==NULL){
           delete front;
           front=NULL;
        }
       
      else{
         node *t= front;
        front=t->next;
        front->prev=NULL;
        delete t;
      }
    }

    void deleteRear(){
        if(front==rear){
            delete rear;
            rear=NULL;

        }
        node *t=rear;
        rear=t->prev;
        t->prev->next=NULL;
        delete t;
    }

    int getFrontElement(){
         return front->item;
    }
    int getRearElement(){
         return rear->item;
    }

    bool isEmplty(){
        if(front==NULL)
          return true;
         else 
         return false;
    }



};

Deque::Deque()
{
    front=NULL;
    rear=NULL;

}

Deque::~Deque()
{
    while(front!=NULL){ 

        deleteFront();

    }
}

