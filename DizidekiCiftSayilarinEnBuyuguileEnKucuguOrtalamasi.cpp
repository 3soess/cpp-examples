//
// Created by eslem on 24.11.2022.
//
#include <iostream>

using namespace std;

int main() {

    int dizi[8] = {5, 7, 9, 11, 26, 24, 13, 62};

    int eb=dizi[0];
    int ek=dizi[8];

    for (int i = 0; i < 8; i++) {
        if (dizi[i] % 2 == 0) {
            if (eb < dizi[i]) {
                eb = dizi[i];
            }
            if (ek > dizi[i]) {
                ek = dizi[i];
            }
        }
    }

    cout << "En buyuk cift sayi ile en kucuk cift sayinin ortalamasi: " << (float) (eb + ek) / 2 << endl;


    return 0;
}