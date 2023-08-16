#include <iostream>
using namespace std ;
int rev (int size,int arr[] ){
    int is =0 , ls = size-1; 
    while (is <ls ){
        int temp = arr[is]; 
        arr[is]=arr[ls]; 
        arr[ls]= temp ; 
        is++; 
        ls -- ; 
    }
    return 0 ; 
}
int main(){
    int arr[]={1,2,3,4,5}; 
    rev(5,arr);
    for (int j : arr){
        cout <<j<<endl; 
    }
}
