//
// Created by eslem on 21.11.2022.
//
#include <iostream>
using namespace std;



int main(){

    int a[8]={2,7,20,8,9,1,6,15};
    int as1=a[0],as2=a[1],as3=a[2];
    for(int i=0;i<8;i++){
        if(as1<a[i]){
            as3=as2;
            as2=as1;
            as1=a[i];
        }
        else if(as2<a[i]){
            as3=as2;
            as2=a[i];
        }
        else if(as3<a[i]){
            as3=a[i];
        }
    }
    cout << "En buyuk 3 sayi: " << as1 << "," << as2 << "," << as3 << endl;
    cout << "Toplam: " << as1+as2+as3 << endl;


    return 0;
}