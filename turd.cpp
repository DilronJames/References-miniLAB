#include <iostream>
using namespace std;


void randValue(int& num) {
    num += 7;
}


int main() {
    int value;
    cout << "Enter an integer: ";
    cin >> value;
    cout << "original Value: " << value;
    randValue(value);


    cout << "randomized number: " << value << endl;
    return 0;
}
