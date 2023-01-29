//
// Created by eslem on 1.12.2022.
//
#include <iostream>
using namespace std;
int main(){

    int x[3]={1,2,3};
    int *q;
    q=x;
    cout << q[2] << endl;
    q[2]=8;
    cout << x[2] << endl;

    return 0;
}