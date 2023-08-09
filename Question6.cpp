#include <iostream>
using namespace std; 
int main(){
    int row = 9 ; 

    for (int i = 1; i<=row  ; i++){
        char ch ='A',ch2='A';
        if (i<=5){
            for (int j = 1; j<=5 +(i-1);j++){
                if (j<=5-i){
                    cout << " "; 
                }else{
                    cout << ch ; 
                    ch++;
                }
            }cout << endl ; 
        }
        else {
            for (int k = 1; k<=5+(9-i);k++){
                if (k <=i-5){
                    cout << " "; 
                }else {
                    cout << ch2; 
                    ch2++;
                }
            }cout << endl ; 
        }
    }
    return 0 ; 
}