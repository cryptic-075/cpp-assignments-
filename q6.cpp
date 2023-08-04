#include <iostream>
using namespace std ; 
int main(){
        int marks ; 
        cout << " Enter the marks  :"; 
        cin>>marks ; 
        if (marks>=90 && marks<=100) cout <<"Your grade is A+"<<endl;
        else if (marks>=80 && marks<=100) cout << "your marks is A"<<endl ;
        else if (marks>=70 && marks<=100) cout << "your marks is B+"<<endl ;
        else if (marks>=60 && marks<=100) cout << "your marks is B"<<endl ;
        else if (marks>=50 && marks<=100) cout << "your marks is C"<<endl ;
        else if (marks>=40 && marks<=100) cout << "your marks is D"<<endl ;
        else if (marks>=30 && marks<=100) cout << "your marks is E"<<endl ;
        else if (marks<30 && marks >=0) cout << "your marks is F"<<endl ;
        else cout << "Enter the valid marks "; 
        
        
        
    return 0 ; 
}