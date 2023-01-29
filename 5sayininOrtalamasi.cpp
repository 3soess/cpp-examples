//
// Created by eslem on 10.11.2022.
//
#include <iostream>

using namespace std;

int main() {

int toplam = 0;
for (int i = 0; i < 5; i++)
{
cout << "Lutfen sayi giriniz." << endl;
int sayi;
cin >> sayi;
toplam += sayi;
int ortalama = toplam / 5;
cout << "Ortalamasi: " << ortalama << endl;

}
    return 0;
}