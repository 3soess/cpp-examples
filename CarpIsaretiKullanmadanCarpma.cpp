//
// Created by eslem on 18.11.2022.
//
#include <iostream>
using namespace std;

int carpim (int a,int b){
    int sonuc=0;
    for(int i=0;i<b;i++){
        sonuc=sonuc+a;
    }
    return sonuc;
}


int main(){

cout << carpim(4,4) << endl;

    return 0;
}