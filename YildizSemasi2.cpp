//
// Created by eslem on 10.11.2022.
//
#include <iostream>

using namespace std;

int main() {

int boyut;
cout << "Lutfen boyut giriniz." << endl;
cin >> boyut;
for (int i = 1; i <= boyut; i++){
for (int j = 1; j<i; j++) {
cout << "*";
}
cout << endl;
}
    return 0;
}