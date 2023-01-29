//
// Created by eslem on 24.11.2022.
//
#include <iostream>
using namespace std;
int main(){

    int n;
    cin >> n;
    int toplam=0;
    for(int i=0;i<n;i++){
        int g;
        cin >> g;
        toplam+=g;
    }
    cout << "Toplam: " << toplam << endl;

    return 0;
}