
// function l_searching(arr,n){
//     for(let i=0;i<arr.length;i++){
//         if(arr[i]==n){
//             return i;

//         }
//     }

//     return -1
// }


// Binary Search

function b_search(arr,i,j,n){
     mid=Math.floor( (i+j)/2)
     if(arr[mid]==n){
        return mid
     }
     else if (arr[mid]>n){
        j=mid-1
        return b_search(arr,i,j,n)
     }
     else if (arr[mid]<n){
        i=mid+1
        return b_search(arr,i,j,n)
     }

     else{
        return -1;
     }
}

let arr1=[23,26,28,64,76]

let res = b_search(arr1,0,4,26)
console.log(res)




