#include <iostream>
using namespace std; 
int count (int arr [],int num ){
    int count =0 ; 
    for (int i = 1 ; i<num ; i++){
        if (arr[i]%2==0 )
        count ++; 
    }
    return count  ; 
}
int main(){
    int arr[]={1,2,4,3,2}; 
    int size = 5; 

    cout <<"Even : "<< count(arr,size)<< "\nOdd  : "<<size - count(arr,size)<<endl ; 
    return 0 ; 
}