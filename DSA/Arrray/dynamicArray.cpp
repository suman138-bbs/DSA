#include<stdio.h>
#include<iostream>
using namespace std;
// using namespace std;
// class Array
// {
// private:
//     int capacity;
//     int lastIndex;
//     int *ptr;
//     int counter;
// public:
//     Array(){
//         capacity = 0;
//         lastIndex = -1;
//         ptr = NULL;
//         counter = 0;
//     }
    
//      void createArray(int);
//      void insert(int,int);
//      void append(int);
//      int getItem(int);
//      bool isEmpty();
//      bool isFull();
//      void del(int);
//      void edit(int,int);
//      int count();
//      int getCapacity();
    
// };

// void Array::createArray(int size){
//     ptr = new int[size];
//     capacity = size;
//     lastIndex = size-1;

// }

// void Array::insert(int index,int value){
//    ptr[index] = value;
//    counter++;

// }

// void Array::append(int value){
//     lastIndex++;
//     ptr[lastIndex] = value;
//     counter++;
// }


// int Array::getItem(int index){
//     return ptr[index];

// }

// bool Array::isEmpty(){
//     if(lastIndex == -1){
//         return true;

//     }
//     else{
//         return false;
//     }
// }


//  bool Array::isFull(){
//     if(counter == capacity){
//         return true;
//     }
//     else{
//         return false;
//     }
//  }


// void Array::del(int index){
//     ptr[index] = ptr[lastIndex];
//     capacity--;
//     lastIndex--;
//     counter--;
// }

// void Array::edit(int index,int value){
//     ptr[index] = value;
// }



// int Array::count(){
//     return counter;

// }

// int Array::getCapacity(){
//     return capacity;
// }






// // int main(){


// // }



class Array {
private:

int capacity;
int lastIndex;
  int *ptr;
  void doubleArray(){
       int *temp = new int[capacity*2];
       for(int i = 0;i <capacity;i++){
        temp[i]=   ptr[i];
       }
       delete []ptr;
       ptr=temp;

       capacity = capacity *2;
       
    }

   void halfArray(){
        int *temp  = new int[lastIndex+1];
        for(int i=0;i<=lastIndex;i++){
            temp[i] = ptr[i];
        }
        delete []ptr;
        ptr=temp;
        capacity = lastIndex+1;
    }
    public:
    Array(){
        lastIndex  = -1;
        ptr = NULL;

    }
    void createArray(int size){
        capacity = size;
        if(!NULL)
        {
            ptr = new int[size];
        }
        else {
            cout <<"Array Already Created"<<endl;
        }
    }
    void append(int element){
        if(capacity != (lastIndex+1)){
            ++lastIndex;
            ptr[lastIndex]=element;

        }
        else{
             doubleArray();
            ++lastIndex;
            ptr[lastIndex] =element;

        }

    }

    void remove(){
           --lastIndex;
           if(lastIndex ==((capacity/2)-1)){
            halfArray();
           }
    }

    void PrintLenAndCapa(){
        cout << "capacity "<<capacity << "Lastindex " <<lastIndex<<endl;
    }
    
};


int main(){
    Array a;
    a.createArray(5);
    a.append(2);
    a.append(2);
    a.append(2);
    a.append(2);
    a.append(2);
    a.append(2);
    a.remove();
    a.remove();
    a.remove();
    a.remove();
    
   
    
    a.PrintLenAndCapa();

}
