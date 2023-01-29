//
// Created by eslem on 1.12.2022.
//
#include <iostream>
using namespace std;

    int f(int *p){
        p[2]=10;
    }


    int topla(int *w, int boyut){
        int toplam=0;
        for(int i=0;i<boyut;i++){
            toplam+=w[i];
        }
        return toplam;
    }


int main(){

    int a[3]={1,2,3};
    int *p;
    p=a;
    cout << a[2] << endl;
    f(p);
    cout << a[2] << endl;
    cout << "Toplam: " << topla(a,3) << endl;


    return 0;
}