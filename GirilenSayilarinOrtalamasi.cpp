//
// Created by eslem on 10.11.2022.
//
#include <iostream>

using namespace std;

int main() {

int toplam = 0;
int sayi = 0;
int okunan = 0;

for (int i=0; okunan != -1; i++) {
cout << "Lutfen sayi giriniz." << endl;
cin >> okunan;
toplam += okunan;
sayi++;
cout << "Ortalama:" << toplam / sayi << endl;
}

    return 0;
}
