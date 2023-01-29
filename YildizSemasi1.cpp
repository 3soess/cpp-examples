//
// Created by eslem on 10.11.2022.
//
#include <iostream>

using namespace std;

int main() {

int sayi;
cout << "Lutfen sayiyi giriniz." << endl;
cin >> sayi;
for (int i = 1; i <= sayi; i++) {
for (int k = 1; k<i; k++) {
cout << " "; //boşluk artarak gidecek.//
}
for (int j = 1; j <= sayi - i + 1; j++) {
cout << "*";
}
cout << endl;
}
    return 0;
}