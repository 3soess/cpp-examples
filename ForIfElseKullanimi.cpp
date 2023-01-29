//
// Created by eslem on 10.11.2022.
//
#include <iostream>

using namespace std;

int main() {

int n;
cout << "Lutfen kac sayi gireceginizi yaziniz." << endl;
cin >> n;
int esayi = 0, asayi = 0, ssayi = 0;
for (int i = 0; i < n; i++) {
int g;
cin >> g;
if (g > 0) {
asayi++;
}
else if (g < 0)
esayi++;
else
ssayi++;


cout << "Pozitifler: " << (float)asayi / n << endl;
cout << "Negatifler: " << (float)esayi / n << endl;
cout << "Sifirlar: " << (float)ssayi / n << endl;

}
    return 0;
}
