#include <iostream>
using namespace std ; 
int main(){
        char opt; 
        int num1,num2 ;
        cout << " Enter the operator (+,-,*,/) "; 
        cin >>opt; 
        cout <<"Enter the numbers : "; 
        cin>>num1>>num2 ; 
        switch (opt){
            case '+': 
                cout << num1 << opt<<num2<<" = "<<num1+num2<<endl ; 
                break ; 
            case '-':
                cout << num1 << opt<<num2<<" = "<<num1-num2<<endl ; 
                break;
            case '*':
                cout << num1 << opt<<num2<<" = "<<num1*num2<<endl ; 
                break ; 
            case '/': 
                cout << num1 << opt<<num2<<" = "<<num1/(float)num2<<endl ; 
                break ;
            default : 
                cout << "Enter valid operation "; 
        }
    return 0 ; 
}