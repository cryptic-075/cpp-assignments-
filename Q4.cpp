#include <iostream>
using namespace std ;
void odd (int n ,int m ){
    while (n!=m+1){
        if (n%2!=0){
            cout << n <<" "; 
        }
        n++; 
    }
}

int main(){
    int num1,num2 ;
    cin >> num1>> num2 ; 
     odd (num1,num2); 
    return 0 ;
}