#include <iostream>
using namespace std ; 
int main(){
        int cp ,sp ; 
        cout << " Enter the cost price "; 
        cin >> cp; 
        cout <<" Enter the selling price "; 
        cin >>sp ; 
        if (cp >sp ) cout <<" loss "<<cp-sp ; 
        else cout <<"profit "<<sp-cp ; 
    return 0 ; 
}