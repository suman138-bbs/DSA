#include<iostream>
#include<stdio.h>
using namespace std;

// class Cuboid{
//     int length;
//     int breadth;
//     int height;
//     public:
//     Cuboid(int len,int bre,int h){
//         length=len;
//         breadth=bre;
//         height=h;
//     }

//    void showData(){
//         cout <<length<<breadth<<height<<endl;
//     }



// };

// int main(){
//     Cuboid c1(20,30,40);
//     c1.showData();
    
// }

// class Complex{
//     int real;
//     int imgi;
//     public:
//     Complex(int r,int i){
//         real = r;
//         imgi = i;


//     }
//     void showData(){
//         cout <<real<<" "<<imgi<<endl;
        
//         }
        


// };
// int main(){
//     Complex c1(20,30);
//     Complex arr[5]={{20,40},{50,60},{70,80},{50,60},{70,80}};
//     for(int i=0;i<5;i++){
//         arr[i].showData();
//     }

//     c1.showData();

    
// }

/**
 * Implement deep copy to avoid memory location 
*/

class Number{
    int size;
    int *arr;
    public:
    Number(){}
    Number(int s){
        size =s;
       arr= new int[s];
       cout <<"Array created Successfully"<<endl;
    }
   void addToArray(int inc){
        for(int i=0;i<size;i++){
            arr[i]=i+inc;
        }
    }
    void show(){
        for(int i=0;i<size;i++){
            cout << arr[i] <<" ";
        }
        cout <<endl;
    }

    Number(Number &n){
        size = n.size;
        arr =   new int [size];
        
        for(int i =0;i<size;i++){
            
           arr[i]=n.arr[i];
           
        }

    }
    ~Number(){
        delete []arr;
    }

    
};

int main(){
    Number n1(5);
    n1.addToArray(10);
    Number n2(n1);
    n2.show();
    n2.addToArray(50);
    n1.show();
    n2.show();
    
    
}


// class Date{
//     int d,m,y;
//   public:
//     Date():d(26),m(8),y(2000)
//     {
//         cout <<d<<'-'<<m<<'-'<<y;
//     }
    
// };

int main(){
    Date d1;
}