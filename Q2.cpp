#include <iostream>
using namespace std; 
float area(int r ){
    return 3.14*r*r;
}
float circumference (int r ){
    return 3.14*r*2; 
}
int main(){
    int radius ; cin >> radius ; 
    cout << "Area  : "<< area(radius )<<endl ; 
    cout <<"Circumference : "<<circumference(radius )<<endl ; 
    return 0 ; 
}