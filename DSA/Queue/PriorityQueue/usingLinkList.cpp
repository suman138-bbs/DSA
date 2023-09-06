#include<iostream>
#include<stdio.h>
using  namespace std;

struct node{
  int pri;
  int item;
  node *next;
};
class PQueue
{
private:
    node *start;
   
public:
    PQueue();
    PQueue(PQueue &p){
        node *t=p.start;
        while(t){
            insert(t->item,t->pri);
            t=t->next;
        }

    }

    void insert(int val,int pi){
        node *temp = new node;
        temp->item=val;
        temp->pri=pi;
        temp->next=NULL;
        if(start==NULL){
            start=temp;
        }
        else{
            node *t=start;
            while(t){
                if(t->pri < pi && t->next->pri > pi){
                    temp->next=t->next;
                    t->next = temp;
                    break;
                }

                else if(t->next==NULL) {
                     t->next=temp;
                }
                
                t=t->next;
                
            }
            

        }

    }

    void deleteNode(){
        node *t= start;
        if(t->next==NULL){
            delete t;
            start=NULL;
            return;

        }

        while(t->next->next){
            t=t->next;
        }
       
        delete t->next;
        t->next = NULL;

    }

    int getHighestElement(){
        node *t= start;
        while(t){
            t=t->next;
        }

        return t->item;


    }

    int getHighestNumber(){
        node *t= start;
        while(t){
            t=t->next;
        }

        return t->pri;


    }

    int isEmpty(){
        if(start==NULL) return true;
        return false;
    }




    ~PQueue();
};

PQueue::PQueue()
{

    start=NULL;
}

PQueue::~PQueue()
{
    while (start)
    {
       deleteNode();
    }
    
    
}
