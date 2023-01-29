//
// Created by eslem on 10.11.2022.
//
// Bir işçi işi kaç günde bitirmektedir? cevap:10 Toplam kaç işçi çalışacak. cevap = 2. İşin bitme süresi 5 gün. //
#include <iostream>

using namespace std;

int main() {

cout << "Bir isci isi kac gunde bitirmektedir? " << endl;
int kacgun, kacisci;
cin >> kacgun;
cout << "Kac isci calisacak? " << endl;
cin >> kacisci;
cout << "Isin bitirme suresi: " << (float) kacgun / kacisci << " gundur." << endl; // floatla yazarsan 15 bölü 2 de ondalıklı sayı olarak alırsın. //

    return 0;
}
