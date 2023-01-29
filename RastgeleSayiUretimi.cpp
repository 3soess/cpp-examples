//
// Created by eslem on 18.11.2022.
//
#include <iostream>
using namespace std;
int main(){

    int rg;
    srand (time(NULL));
    rg=rand()%6+1;
    cout << rg << endl;
    rg=rand()%2;
    cout << rg << endl;
    rg=rand()%100;
    cout << rg << endl;


    return 0;
}