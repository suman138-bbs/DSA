#include<stdio.h>
#include<iostream>
using namespace std;
// int main(){
//     char ch[]="madam";
//     int i,lastindex;
//     for(i=0;ch[i]!=0;i++);
     
//      lastindex=i-1;
//      cout <<lastindex;
//      for(i=0;i<lastindex/2;i++){
//         if(ch[i]==ch[lastindex-i]){
//             continue;
//         }
//         else{
//             cout <<"NOT Palindrome";
//             return 0;
//         }
//      }

//     cout << "Palindrome";

    



// }



int main(){

    char ch[]=" Suman ";
    char tem;
    int i,lastindex;
    for(i=0;ch[i]!=0;i++);
    lastindex=i-1;
    cout<<ch<<endl;
    if(ch[0]==32){
        for(i=0;i<=lastindex;i++){
            ch[i]=ch[i+1];

        }

        ch[lastindex-1]=0;

    }
    cout <<ch<<"Bhandari";

}