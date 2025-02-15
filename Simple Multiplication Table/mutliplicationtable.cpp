#include <iostream>

using namespace std;

int main(){
    short int number;
    cout << "Enter a number (1-10) : ";
    cin>>number;
    short int i = 1;
    while(i <=10 ){
        cout << number << " * " << i << " = " << number * i << "\n";
        i++;
    }
    return 0;
}