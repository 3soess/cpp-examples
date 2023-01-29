//
// Created by eslem on 15.11.2022.
//
#include <iostream>
using namespace std;
int f(int x){
    cout << x << endl;
    return 8; // Return değer döndürme komutudur. //
}

void g(int x){ // Bu komut sayıları stabil döndürür. Değişmez. //
    cout << x+5 << endl;
}

int main(){
cout << f(5) << endl;
f(10);
g(7);


    return 0;
}