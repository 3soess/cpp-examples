//
// Created by eslem on 24.11.2022.
//
#include <iostream>
using namespace std;
int main(){

    int dizi[8]={5,7,9,11,24,26,13,62};
    int toplam=0;
    int a=0;
    for(int i=0;i<8;i++){
        if(dizi[i]%2==1){
            toplam+=dizi[i];
            a++;
        }
    }
    cout << "Tek sayilarin ortalamasi: " << (float)toplam/a << endl;

    return 0;
}