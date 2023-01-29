//
// Created by eslem on 2.12.2022.
//
#include <iostream>
using namespace std;

int f(int *a,int boyut){
    int eb=a[0];
    int ek=a[0];
    for(int i=0;i<boyut;i++){
        if(eb<a[i]){
            eb=a[i];
        }
        if(ek>a[i]){
            ek=a[i];
        }
    }
    return eb-ek;
}


int main(){

    int a[5]={7,11,55,22,88};
    cout << f(a,5) << endl;


    return 0;
}