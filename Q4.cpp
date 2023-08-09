#include <iostream>
using namespace std ; 
int main(){
    int num,rev = 0 ; cin >> num ; 
    while (num){
        rev*=10; 
        rev += num%10; 
        num/=10; 
    }cout << rev ; 
    return 0 ;
}