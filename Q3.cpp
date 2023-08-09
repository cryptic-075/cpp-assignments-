#include <iostream>
using namespace std ;
int main(){
    int num,sum=0 ; cin >> num ;
    while (num ){
        sum+=num; 
        num--;
    }cout << sum <<endl ;
    return 0 ;
}