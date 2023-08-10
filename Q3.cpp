#include <iostream>
using namespace std; 
void elegible(int ); 
int main(){
    int age ; cin >> age ; 
    elegible(age); 
    return 0 ; 
}
void elegible(int age ){
    if (age >=18){
        cout << "Yes"<<endl ;
    }
    else {
        cout << "No"<<endl; 
    }
}