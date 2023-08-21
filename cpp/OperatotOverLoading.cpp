#include<stdio.h>
#include<iostream>
using namespace std;


// class Complex{
//       int real;
//       int imgi;
//       public:
//       Complex(){
//         real =0;
//         imgi = 0;

//       }
    
//     Complex operator+(Complex C){
//            Complex temp;
//            temp.real = real +C.real;
//            temp.imgi = imgi +C.imgi;
//            return temp;
//     }

//    void data(int val1,int val2){
//             real = val1;
//             imgi = val2;
//    }

//    void showData(){
//     cout << "Real" <<real<<" "<<"Imiginary" <<imgi;
//    }



// };

// int main(){
//     Complex c,c1,c2;
//     c1.data(2,3);
//     c2.data(3,2);
//     c = c1+c2;
//     c.showData();
// }


// Overloading of insertion and extration operator


class Time{
      int hr;
      int min;
      int sec;
      public:
      Time(){
         hr = 0;
        min = 0;
        sec = 0;

      }
   

   void data(int hour,int min,int sec){
           hour = hour;
           min=min;
           sec = sec;
   }
   void showData(){
  
   }



};

int main(){
    Time t1,t2;
    t1.data(3,40,41);
    t2.data(4,40,41);
    // cout<<t1;
}