#include <iostream>
using namespace std; 
int main (){
    int a = 2 , b =4,c=a ; 
    cout << "value of a and b before swapping is : "<<a<<" "<<b<<endl; 

    a=b ; 
    b=c ; 
    cout <<"value of a and b after swapping are : "<<a << " "<<b ;
   

    return 0 ; 
}