
#include <iostream>
#include <iomanip>
using namespace std; 
int main(){
    cout << " Enter the no of lines : ";
    int row ; cin >> row ; 
    int number = 2; 
    for (int i  = 1 ; i<=row ; i++){
        for (int k = row ; k>=i ; k--){
            cout << " ";
        }
        if (row ==1 ){
            cout << 2 <<endl ; 
        }
        else {
            for (int l = 1 ; l<=i;){
                int flag = 0 ;              // checks the prime if remains 0 than the number is prime ;
                for (int m = 2; m<number ; m++){
                    if (number % m ==0 ){
                        flag ++ ; 
                    }
                }
                if (flag == 0){
                    cout <<setw(3)<< number; 
                    l++;                    // value of for loop only increase if we found a prime number ;
                }
                number ++ ; 
            }
            cout << endl ; 
        }
    }
    return 0 ; 
}