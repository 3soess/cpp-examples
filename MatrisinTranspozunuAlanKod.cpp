//
// Created by eslem on 29.11.2022.
//
#include <iostream>
using namespace std;
int main(){

    int a[3][3]={5,4,3,4,0,4,7,10,3};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << " " << a[i][j];
        }
        cout << endl;
    }

    int b[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            b[j][i]=a[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << " " << b[i][j];
        }
        cout << endl;
    }


    return 0;
}