//
// Created by eslem on 3.12.2022.
//
#include <iostream>
#include <cstring>

using namespace std;

    int boyut(char *s){
    int b=0;
    char c=s[0];
    while(c!='\0'){
        c=s[++b];
    }
    return b;
}

int main(){

    char *s="Eslem"; // Stringler degistirilemez. //
    cout << s << endl;
    cout << s[2] << endl;
    char c[6]="Evren";
    char a[5];
    a[0]='e'; // Tek tirnak karakter. Cift tirnak Dizgi. //
    a[1]='v';
    a[2]='r';
    cout << c << endl;
    cout << a << endl;
    // strcmp= karsilastirir. 0 ise esit demek. ilk string kucukse -1. ikinci string kucukse +1 seklinde degerler dondurur. //
    if(strcmp(s,c)==0){
        cout << "Esitler" << endl;
    }
    else{
        cout << "Esit degiller" << endl;
    }

    cout << boyut(c) << endl;
    cout << strlen(c) << endl; // String'in boyutunu dondurur. //
    char *x=(char *)malloc(sizeof(char)*7);
    strcpy(x,s); // icerigini kopyalar. //
    cout << x << endl;

    return 0;
}