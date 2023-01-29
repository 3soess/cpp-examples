//
// Created by eslem on 24.11.2022.
//
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int dizi[8]={5,7,9,11,24,26,13,62};
    int carpim=1;
    for(int i=0;i<8;i++){
        carpim*=dizi[i];
    }
    cout << "Geometrik Ortalamasi: " << pow(carpim,(float)1/8) <<  endl;



    return 0;
}