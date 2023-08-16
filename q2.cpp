#include <iostream>
using namespace std ;

int main(){
    int arr[]={3,2,3,4,5,}; 
    int size = 5,min= arr[0],max=arr[0]; 

    for (int i = 0 ; i<size ;i++){
        if (arr[i]<min){
            
            min = arr[i]; 
        }
        if (arr[i]>max){
            
            max = arr[i]; 
        }
    }
    cout << min+max ;
    return 0 ; 
}