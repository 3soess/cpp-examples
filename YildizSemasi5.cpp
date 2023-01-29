//
// Created by eslem on 10.11.2022.
//
#include <iostream>

using namespace std;

int main() {

int a;
cout << "Lutfen kac boyutlu olacagini giriniz." << endl;
cin >> a;
for (int i = 0; i<a; i++) {
for (int k = 0; k < a - (i + 1); k++) {
cout << " ";
}
for (int j = 0; j<i+1; j++) {
cout << "*";
}
cout << endl;

}
    return 0;
}