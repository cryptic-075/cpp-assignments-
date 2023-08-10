#include <iostream>
using namespace std ; 
void isprime(int num ){
    int flag  = 1 ;
    if (num==1){
        return; 
    }
    for(int i =2; i<num; i++){
        if (num%i==0 ){
            flag = 2;
        }
    }
    if (flag ==1 ){
        cout <<  num<< " " ; 
    }  
}
int main (){
    int num1 ,num2 ;
    cin>>num1>>num2; 
    for (int i = num1; i<=num2 ; i++){
        isprime(i);
    }
}