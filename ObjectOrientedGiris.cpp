//
// Created by eslem on 20.12.2022.
//
#include <iostream>
using namespace std;

    class Car {
    public:


        int fiyat;
        int hiz;
        string model;
        string renk;
        bool aktif;

        void start(){

            if(aktif){
                cout << model + " Zaten calisiyor." << endl;
                return;
            }

            aktif=true;
            cout << model + " Calistirildi." << endl;

        }

        void stop(){

            if(aktif){
                cout << model + " Durduruldu" << endl;
                return;

            }
            aktif=false;
            cout << model + " Zaten calismiyor." << endl;

        }

    };


int main(){

    Car arac1 = *new Car ();
    arac1.model = "Mercedes CLA180";
    arac1.fiyat = 100.000;
    arac1.hiz = 300;
    arac1.renk = "Red";


    Car arac2 = *new Car ();
    arac2.model = "BMW X6";
    arac2.fiyat = 120.000;
    arac2.hiz = 298;
    arac2.renk = "White";


    Car arac3 = *new Car ();
    arac3.model = "Fiat Panda";
    arac3.fiyat = 20.000;
    arac3.hiz = 120;
    arac3.renk = "Gray";


    Car arac4 = *new Car ();
    arac4.model = "Toyota Corolla";
    arac4.fiyat = 35.000;
    arac4.hiz = 180;
    arac4.renk = "Green";

    arac1.start();
    arac1.start();
    arac1.start();

    arac1.stop();
    arac1.stop();
    arac1.stop();


    arac2.start();
    arac3.start();
    arac4.start();



    return 0;
}