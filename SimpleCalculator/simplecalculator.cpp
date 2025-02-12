#include <iostream>

using namespace std;

int main(){
    float x,y;
    int operation;
    float result;
    cout << "Enter two number: ";
    cin >> x >> y;
    cout << "Choose an operator:"<<"\n"
         << "1: Summation (+)"<<"\n"
         << "2: Substraction (-)"<<"\n"
         << "3: Multiplication (x)"<<"\n"
         << "4: Divide (/)"<<"\n";
    
    cin >> operation;

    switch (operation)
    {
        case 1: result = x + y;break;
        case 2: result = x - y;break;
        case 3: result = x * y;break;
        case 4: result = x / y;break;
        default:
            cout<<"\nPlease enter a valid value"<<"\n"; 
            
    }

    cout << "\nYour result is: "<<result<<"\n";
    
    cout << "\nEnter a key for exit" <<"\n";
    cin.get();
    cin.get();  
    return 0;
}