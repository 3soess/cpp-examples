//
// Created by eslem on 17.12.2022.
//
#include <iostream>
#include <fstream> // Bu işlemde, bu kütüphaneyi kullanman gerekiyor. //
using namespace std;
int main(){
    // YAZMA BOLUMU //
    ofstream dosya;
    dosya.open ("Deneme.txt");
    if(dosya.is_open()){
        dosya << "Eslem Arik\n";
        dosya.close();
    }

    // OKUMA BOLUMU //
    string satir;
    ifstream dosya2 ("Deneme.txt");
    if (dosya2.is_open()){
        while (getline (dosya2,satir)){
            cout << satir << '\n';
        }
        dosya2.close();
    }
    return 0;
}