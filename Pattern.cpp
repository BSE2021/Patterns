// Pattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int i, j;

    for (i = 1; i <= 20; i++) {
        for (j = 1; j < i; j++) {
            cout << "* \t";
        }
        cout << "\n";
    }
    cout << "\n";

    for (i = 19; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            cout << "* \t";
        }
        cout << "\n";
    }

}

