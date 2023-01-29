//
// Created by eslem on 1.12.2022.
//
#include <iostream>
using namespace std;

    int f(int *x, int *y, int *z){
        *x=40;
        *y=90;
        *z=100;
        return 50;
    }


int main(){

    int a=10,b=10,c=10;
    int *p,*q,*r;
        p=&a;
        q=&b;
        r=&c;
        cout << a << endl;
        f(p,q,r);
        cout << *p << " " << *q << " " << *r << endl;



    return 0;
}