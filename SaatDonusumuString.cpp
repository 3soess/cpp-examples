//
// Created by eslem on 5.12.2022.
//
#include <iostream>
using namespace std;


int main(){

    cout << "Lutfen 12'lik sistemde bir saat giriniz." << endl;
    char s[11];
    cin >> s;
    if(s[8]=='P'){
        char x[3];
        x[0]=s[0];
        x[1]=s[1];
        x[2]='\0';
        int saat=atoi(x);
        saat+=12;
        s[0]=(char)48+saat/10;
        s[1]=(char)48+saat%10;
        s[8]='\0';
        cout << s << endl;
    }
    else{
        s[8]='\0';
        cout << s << endl;
    }

    return 0;
}