//
// Created by eslem on 10.11.2022.
//
#include <iostream>

using namespace std;

int main() {

int b;
cout << "Boyutu giriniz." << endl;
cin >> b;
for (int i = 0; i < b; i++) {
for (int j = 0; j < b; j++) {
if (i == j)
cout << "1";
else
cout << "0";
}
cout << endl;
}
    return 0;
}