//
// Created by eslem on 24.11.2022.
//
#include <iostream>
using namespace std;
int main(){

    int dizi[8]={5,7,9,11,24,26,13,62};
    int toplam=0;
    for(int i=0;i<8;i++){
        toplam+=dizi[i];
    }
    cout << "Ortalamasi: " << (float)toplam/8 << "dir." << endl;



    return 0;
}