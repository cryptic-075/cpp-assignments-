#include <iostream>
using namespace std; 
int main(){
    int num,fact = 1 ;cin >> num ;
    for (int i = num; i>=1; i--){
         fact *=i; 
    }
    if (num == 0 ) {
        cout << 0 ; 
    }else {
        cout << fact ;
    }
    return 0 ; 
    
}