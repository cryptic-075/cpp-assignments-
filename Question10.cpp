#include <iostream>
using namespace std; 
int main(){
    int starows,starcol; 
     cout << "Enter the no of star rows : "; 
     cin>>starows; 
     cout << "Enter the no of srar columns ; "; 
     cin >> starcol; 
     for (int i = 1; i<=starows; i++){
        for (int j=1 ;j<=starcol ; j++){
            cout << "*";
        }cout <<endl ; 
     }
    return 0 ; 
}