#include <iostream>
using namespace std ;
int missing (int arr[],int size){
    int max =arr[0],zerocheck =1,sum = 0 ;
    for (int i = 0 ; i< size; i++){
        sum+=arr[i]; 
        if (max <arr[i]){
            max = arr[i];
        }
        if (arr[i]==0){
            zerocheck = 1 ;
        }
    }
    if (zerocheck ==0){
        return 0 ;
    }else { 
        return ((max*(max+1))/2- sum );  
    }

}
int main(){
    int arr[]={1,2,3,4,5,7,0}; 
    cout << missing (arr,sizeof(arr)/sizeof(arr[0]));
}
