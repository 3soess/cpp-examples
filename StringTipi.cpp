//
// Created by eslem on 4.12.2022.
//
#include <iostream>
using namespace std;

int main(){

    string s;
    char *p="Eslem";
    char c[6]="Eslem";
    s=p;
    cout << s.size() << endl;
    s.append(" deneme");
    cout << s << endl;
    cout << s.substr(2,8) << endl;


    return 0;
}