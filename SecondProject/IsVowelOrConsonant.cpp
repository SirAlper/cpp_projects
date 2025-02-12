#include <iostream>

using namespace std;

int main(){
    char letter; 
    cout << "Enter a letter: ";
    cin >> letter;
    switch (letter)
    {
        case 'a':
        case 'e':
        case 'u':
        case 'o':
        case 'i': cout << letter << " is a vowel\n";break;
        default:cout<<letter<<" is a consonant ";
                cout<<"or not a letter \n";break;
    }
    return 0;
}