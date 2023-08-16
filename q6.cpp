#include <iostream>
#include <algorithm>
using namespace std;
int elem(int arr[],int n ){
    int arr2[n];

    arr2[0]=arr[0]; 

    for (int i= 1 ; i<n ; i++){
        arr2[i]=max(arr[i-1],arr2[i-1]);
    }
    int right = arr[n-1]; 

    for (int i = n-1 ; i>=0; i--){
        if ( arr2[i]< arr[i] && arr[i]<right){
            return arr[i]; 
        }
        right = min(arr[i],right); 
    }
    return -1;
}
int main(){
    int arr[]= { 5, 1, 4, 3,  8, 10, 7, 9}; 
    int size = *(&arr+1)-arr; 
    cout << elem(arr,size)<<endl; 
    return 0 ;
}