//
// Created by eslem on 10.11.2022.
//
#include <iostream>

using namespace std;

int main() {


cout << "Lutfen boyutu giriniz." << endl;
int boyut;
cin >> boyut;
for (int i = 1; i <= boyut; i++) {
for (int j = 1; j <= boyut; j++) {
cout << i * j << " ";
}
cout << endl;
}
    return 0;
}