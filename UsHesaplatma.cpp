//
// Created by eslem on 16.11.2022.
//
#include <iostream>
using namespace std;

int ust (int t,int u){
    int sonuc=1;
    for(int i=1;i<=u;i++){
        sonuc=sonuc*t;
    }
    return sonuc;

}

int main(){

    for(int i=1;i<=20;i++){
        cout << ust (2,i) << endl;
    }

    return 0;
}