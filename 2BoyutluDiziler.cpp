//
// Created by eslem on 26.11.2022.
//
#include <iostream>
using namespace std;
int main(){

    int a[2][2]={{1,2},{4,5}}; //2 boyutlu dizi varsa muhtemelen iç içe 2 tane dongu vardir. //
    for(int i=0;i<2;i++) {
        for (int j = 0; j < 2; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    int b[3][2];
    b[0][0]=75;
    cin >> b[0][1];
    b[1][0]=33;
    cout << b[0][0] << endl;
    cout << b[1][0] << endl;

    int c[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            c[i][j]=i+j;
            cout << c[i][j] << " ";
        }
        cout << endl;
    }




    return 0;
}