//
// Created by eslem on 29.11.2022.
//
#include <iostream>
using namespace std;
int main(){

    int kaczar;
    cout << "Lutfen kac zar atilacagini giriniz." << endl;
    cin >> kaczar;

    srand(time(NULL));

    int zar1[kaczar];
    int zar2[kaczar];

    int zar1skor;
    int zar2skor;

    for(int i=0;i<kaczar;i++){

        zar1[i]=rand()%6+1;
        zar2[i]=rand()%6+1;

        if(zar1[i]<zar2[i]){
            zar1skor++;
        }
        else if(zar1[i]>zar2[i]){
            zar2skor++;
        }
    }

    for(int i=0;i<kaczar;i++)
        cout << zar1[i] << " ";
        cout << endl;


    for(int i=0;i<kaczar;i++)
        cout << zar2[i] << " ";
        cout << endl;


    if(zar1skor<zar2skor){
        cout << "Zar1 kazandi." << endl;
    }
    else if(zar1skor>zar2skor){
        cout << "Zar2 kazandi." << endl;
    }
    else{
        cout << "Berabere." << endl;
    }

    return 0;
}