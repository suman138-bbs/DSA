#include<stdio.h>
#include<iostream>
#include<string.h>
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



// int main(){

//     char ch[]=" Suman ";
//     char tem;
//     int i,lastindex;
//     for(i=0;ch[i]!=0;i++);
//     lastindex=i-1;
//     cout<<ch<<endl;
//     if(ch[0]==32){
//         for(i=0;i<=lastindex;i++){
//             ch[i]=ch[i+1];

//         }

//         ch[lastindex-1]=0;

//     }
//     cout <<ch<<"Bhandari";

// }



// Write a function to reverse a string word wise


// char * reverseString(char *ptr ){
//     int i,lastIndex;
//     int k=0;
//     char ch[strlen(ptr)];
    
//     lastIndex = strlen(ptr)-1;
//     cout<<strlen(ptr);
//     for(i=strlen(ptr)-1;i<=0;i--){
//         if(ptr[i]==' '){
//               for(int j = i+1;j<=lastIndex;j++){
//                      for(;k<strlen(ptr);k++){
//                         ch[k]=ptr[j+k];
//                      }
//                      lastIndex=i;
//               }
//         }
//     }
//     cout <<ch;
    
// }
// int main(){
//  reverseString("Suman Bhandari");
// }

#include <iostream>
#include <cstring>

using namespace std;

void reverseString(char *ptr) {
    int i, lastIndex;
    int k = 0;
    int len = strlen(ptr);
    char ch[len]; // Declare an array to hold the reversed string

    lastIndex = len - 1;

    for (i = len - 1; i >= 0; i--) {
        if (ptr[i] == ' ' || i == 0) {
            int start = (i == 0) ? 0 : i + 1;
            for (int j = start; j <= lastIndex; j++) {
                ch[k++] = ptr[j];
            }
            if (i != 0) {
                ch[k++] = ' ';
            }
            lastIndex = i - 1;
        }
    }

    ch[k] = '\0'; // Null-terminate the string
    cout << ch << endl;
}

int main() {
    char input[] = "Suman Bhandari";
    reverseString(input);
    return 0;
}
