//
// Created by eslem on 20.11.2022.
//
#include <iostream>
using namespace std;
int main(){
// Kullanicidan 5 sayi okuyarak en buyuk, en kucuk, ortalama, toplam sayilari yazdir. //

int a[5];
for(int i=0;i<5;i++){
    cin >> a[i];
}
int eb;
for(int i=0;i<5;i++){
    if(a[i]>eb){
        eb=a[i];
    }
}
    cout << "En buyuk: " << eb << endl;
int ek;
for(int i=0;i<5;i++){
    if(a[i]<ek){
        ek=a[i];
    }
}
    cout << "En kucuk: " << ek << endl;

int toplam=0;
for(int i=0;i<5;i++){
    toplam+=a[i];
}
cout << "Toplami: " << toplam << endl;
cout << "Ortalamasi: " << toplam/5 << endl;



    return 0;
}