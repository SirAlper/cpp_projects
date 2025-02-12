//A c++ program that outputs the number of days in the selected month

#include <iostream>

using namespace std;

int main(){
    short int month;
    cout << "Enter a month number:";
    cin >> month;
    switch(month){
        case 4:
        case 6:
        case 9:
        case 11:cout << "There are 30 days\n";break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:cout << "There are 31 days\n";break;
        case 2:cout << "There are 28 or 29 days\n";break;
        default:cout << "Please enter a valid month number";
    }
    return 0;
}