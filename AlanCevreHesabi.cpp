//
// Created by eslem on 10.11.2022.
//
#include <iostream>
#include <math.h>

using namespace std;

int main() {


int a, b, c;
cout << "A kenarini giriniz." << endl;
cin >> a;
cout << "B kenarini giriniz." << endl;
cin >> b;
c = sqrt(a * a + b * b);
cout << "H=" << c << endl;
cout << "Cevresi= " << a + b + c << endl;
cout << "Alani= " << (float) a * b / 2 << endl;

    return 0;
}
