#include <iostream>
using namespace std ; 
int main(){
    
    for (int i = 0  ;i<500;i++){
        int sum = 0,t=i;
        while (t){
            sum += (t%10)*(t%10)*(t%10);
            t/=10;  
        }
        if (i == sum ){
            cout << i <<endl ; 
        }
    }
    return 0 ;
}