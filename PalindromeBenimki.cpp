//
// Created by eslem on 15.12.2022.
//
#include <iostream>
using namespace std;


int main(){

    cout << "Lutfen bir kelime giriniz." << endl;
    char s[100];
    cin >> s;
    char *p,*o;
    p=s;
    o=s;
    while(*p!='\0'){
        p++;
    }
    p--;
    if(*p==*o){
        p--;
        o++;
        cout << "Palindromedir" << endl;
    }
    else
        cout << "Palindrome degildir." << endl;


    return 0;
}