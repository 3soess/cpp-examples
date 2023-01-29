//
// Created by eslem on 30.11.2022.
//
#include <iostream>
using namespace std;
int main(){

    int a=10;
    int *p;
    p=&a;
    cout << "a degeri: " << a << endl;
    cout << "*p: " << *p << endl;
    cout << "&a: " << &a << endl;
    cout << "P: " << p << endl;
    cout << "&p: " << &p << endl;


    return 0;
}