#include <iostream>
#include <algorithm>
using namespace std ;
int minsum (int arr[],int arr2[],int size1,int size2 ){
    int min1 = arr[0],min2 = arr2[0],minar1=arr[0],minar2= arr2[0]; 
    int index1=0, index2=0; 
    for (int i = 0 ; i<size1; i++){
        
        if (min1 > arr[i]){
            min1=arr[i]; 
            index1 =  i; 
        }
    }
    for (int j = 0 ; j<size2; j++){
        if (min2> arr2[j]){
            min2 = arr2[j]; 
            index2=j;
        }
    }
    if (index1!=index2){
        return min1+min2; 
    }
    for (int k = 0 ; k<size1; k++){
        if (minar1 > arr[k] && k != index1 ){
            minar1=arr[k]; 
        }
    }
    for (int l = 0 ;l < size2; l++){
        if (minar2>arr2[l]){
            minar2 = arr2[l]; 
            
        }
    }
    return(min(min1+minar2,min2+minar1)); 
    
}
int main(){
    int arr[] = {5, 4, 3, 8, 1};
    int arr2[] = {2, 3, 4, 2, 1};
    int size1 = *(&arr+1)-arr; 
    int size2 = *(&arr2+1)-arr; 
     
    cout << minsum(arr,arr2,size1,size2)<<endl; 
}