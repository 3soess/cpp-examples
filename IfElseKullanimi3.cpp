//
// Created by eslem on 10.11.2022.
//
#include <iostream>

using namespace std;

int main() {
int a;
cout << "Lutfen birinci sayiyi giriniz" << endl;
cin >> a;
int b;
cout << "Lutfen ikinci sayiyi giriniz." << endl;
cin >> b;
int c;
cout << "Lutfen ucuncu sayiyi giriniz." << endl;
cin >> c;

if (a > b && a<c || a>c && a < b)
{
cout << "a, b ve c'nin arasinda bir degerdir." << endl;
}
else {
cout << "a, b ve c'nin arasinda bir deger degildir." << endl;
}
// a'nın b'ye eşit ve aynı zamanda c'den küçük olup olmadığını yaz. //
if (a == b && a < c)
{
cout << "a, b'ye esit ve ayni zamanda c'den kucuktur." << endl;
}
else {
cout << "a, b'ye esit degil veya c'den kucuk degildir." << endl; // tersi alınınca aradaki bağlaç ve değil veya olur. //
}
// a'nın b'den veya c'den büyük olup olmadığını kontrol edin. //
if (a > b || a > c)
{
cout << "a, b veya c'den buyuktur." << endl;
}
else {
cout << "a,b ve c'den kucuktur veya esittir" << endl;
}
if (a == b && a == c)
{
cout << "Uc sayi birbirine esittir" << endl;
}
else {
cout << "Uc sayi birbirine esit degildir." << endl;
}
    return 0;
}