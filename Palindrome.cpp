//
// Created by eslem on 14.12.2022.
//
#include <iostream>
using namespace std;


int main(){

    cout << "Lutfen bir kelime giriniz." << endl;
    char c[100];
    cin >> c;
    char *p,*q;
    p=c;
    q=c;
    while(*q!='\0'){
        q++; // ++ sistemi pointerlarda dizgi sonuna kadar götürür. //
    }
        q--; // \0'a kadar gittiği için bir önceki harfe kadar götürmüş oluyor. //
        bool palindrome = true;
        while(q>p){
            if (*p!=*q){
                palindrome = false;
            }
            p++;
            q--;
        }
        if(palindrome)
            cout << "Girilen dizgi bir palindrome'dir." << endl;
        else
            cout << "Girilen dizgi bir palindrome degildir." << endl;


    return 0;
}