//
// Created by eslem on 9.11.2022.
//
#include <iostream>

using namespace std;
int main() {
    int total = 7;
    for (int i = 1; i <= total; i++) {
        for (int k = 0; k < total - i; k++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}