//
// Created by eslem on 1.12.2022.
//
#include <iostream>
using namespace std;

int main(){

    cout << "Lutfen 5 adet sayi giriniz." << endl;
    int *p=(int *)malloc(sizeof(int)*5);
    for(int i=0;i<5;i++){
        cin >> *(p+i);
    }
    for(int i=0;i<5;i++){
        cout << *(p+i) << endl;
    }

    return 0;
}