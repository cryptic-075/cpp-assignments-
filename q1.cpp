#include <iostream>
using namespace std ;
int main(){
    int length ,breadth ; 
    cout << " Enter length : ";
    cin >>length; 
    cout << " Enter breadth "; 
    cin>> breadth ; 
    if (length == breadth ){
        cout << "It is a square";
       exit (0); 
    }cout << " It is a rectangle "; 
    return 0 ;
}