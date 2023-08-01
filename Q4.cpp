#include <iostream>
using namespace std ; 
int main(){
    int num;  cin >> num ; 
    int count = 5,sum =0; 
    while (num){
        int result = num%10;
        num/=10;
        
        if (count ==4 || count ==1){
            sum += result ; 
        }
         count--;
    }cout << sum ;                                                                                                                             
}