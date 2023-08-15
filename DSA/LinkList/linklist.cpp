#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;


/**
Singly Link List
*/
// struct node{
//     int item;
//     node *next;
// };

// class SLL{
//    private:
//     node *start;

//     public:
//       SLL(){
//         start = NULL;
//       } 

//       SLL(node  ){

//       }
//     void insertAtStart(int value){
//           node *temp = new node;
//           temp->item = value;
//           temp->next = NULL;
//           if(start==NULL){
//             start = temp;
//             delete temp;
//           }
//           else {
//             temp->next = start;
//             start  = temp;
//             delete temp;
//           }

//     }

//    void insertAtLast(int value){
//         node *t = start;
//         node *temp = new node;
//         temp->item = value;
//         temp->next = NULL;
        
//         while(t->next){
//           t=t->next;

//         }

//         t->next=temp;
//         delete temp;
        

//    } 
     

   
// };


/*
*Doubly Link List

*/
// struct node{
//       node *prev;
//       int item;
//       node *next;
// };


// class DLL{
//   node *start;
//  public:
//     DLL(){
//       start = NULL;
//     }
//       DLL(DLL &list){
//       node *t = list.start;
//       while(t->next!=NULL){
//         if(start==NULL)
//         {
//           insertAtStart(t->item);
//         t=t->next;
//         }
//         else
//         insertAtLast(t->item);
//          t=t->next;

//       }

//     }
//    void insertAtStart(int value){
//       node *temp = new node;
//       temp->prev  = NULL;
//       temp->item=value;
//       temp->next  = NULL;
    

//       if(start ==NULL){
//         start = temp;
//         delete temp;
//       }
//       else{
//         temp->next=start;
//         start->prev = temp;
//         start = temp;
//         delete temp;
//       }

     
//     }

//     void insertAtLast(int value){
//       node *t=start;
//       node *temp = new node;
//       temp->prev  = NULL;
//       temp->item=value;
//       temp->next  = NULL;
      
//       while(t->next!=NULL){
//         t = t->next;

//       }
      
//       t->next = temp;
//       temp->prev = t;
//       delete temp;
//       temp=NULL;
//     }

//     node* searchNode(int item){
//       node*t= start;

//       while(t->next!=NULL){
//         if(t->item==item){

//           return t;
//         }
//         t=t->next;


//       }
//       if(t->item==item){
//         return t;
//       }

//       else{
//         delete t;
//         return NULL;
//       }
//     } 

//     //  void operator=(DLL &list){
//     //   node* temp = new node;
//     //   node *t= temp;
      
//     //   while(list->next!=NULL){
//     //      node* ntemp = new node;
//     //      ntemp.item  =  list.item;
//     //   }   
      
      
//      }

   




//     ~DLL(){
//       delete start;
      
//      }

// };

// // int main(){
// //   DLL d1,d2;

// //  d2.indertAtStart(2);
// //  d2.insertAtLast(5);

// //  d1 = d2;

// // }


/*
*Circular Link List
*/

struct node{
  int item;
  node*next;

};

class CLL{
   node* last;
   public:
   CLL(){
    last = NULL;

   }

   void insertAtStart(int value){
    node *temp = new node;
    temp->item=value;
    temp->next =  NULL;
    if(last==NULL){
      last =temp;
    }
    else{
      temp->next = last->next;
      last->next = temp;
    }

   }


   void insertAtEnd(int value){
    node *temp = new node;
    temp->item=value;
    temp->next =  NULL;
    if(last!=NULL){
      temp->next = last->next;
      last->next = temp;
      last = temp;
    }

    

   }
  
   node* searchNode(int value){
        if(last->item==value){
          return last;
        }
        node *t = last->next;
        while (t == last)
        {
            if(t->item==value){
              return t;
            }
            else{
              t=t->next;
            }

        }
        return NULL;
    }

    void addAfterSpecificNode(node *add,int value){
        node *temp=new node;
        temp->item=value;
        temp->next=add->next;
        add->next=temp;
      
    }

    void deleteFirstNode(){
      node * t=last->next->next;
      delete last->next;
      last->next=t;
    }
    
    CLL(CLL &c){
      last =c.last;


    }

    // node * 



};