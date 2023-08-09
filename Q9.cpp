#include <iostream>
using namespace std; 
int main(){
    cout << "Enter a positive integer : "; 
    int num ; cin>>num ;
    int prime1 =0,prime2 = 0 ; 
    for (int i = 2 ; i<(num+2)/2; i++){
        int flag =0 ;                           //checks the first prime number 
        for (int k = 2 ; k < i  ;k++){
            if (i%k == 0 ){
                flag = 1; 
            }
        }
        if (flag==0){
            prime1 = i ; 
            int temp  = num - prime1 ;          //temp variable to check the second prime number 
             
            int flag2 = 0  ;                    //checks the second prime number
            for (int j  = 2 ; j<temp ; j++){
                if (temp%j==0){
                    flag2=1 ;
                }
            }
            if(flag2 == 0 ){
                prime2 = temp ;                 //if temp is prime its value is passed in prime2 else prime 2 will remain 0 ; 
                cout << num <<" = "<< prime1 <<" + "<< prime2 << endl ; 
            }
        }
    }
    if (prime2==0){
        cout << " Cannot be expressed as the sum of prime numbers "<<endl ;
    }
    return 0 ; 
}