//
// Created by eslem on 30.11.2022.
//
#include <iostream>
using namespace std;
int main(){

    int a[2][3]={0,1,2,9,8,7};
    int b[2][3]={6,5,4,3,4,5};


    for(int i=0;i<2;i++) {
        for (int j = 0; j < 3; j++) {
            cout << a[i][j] + b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}