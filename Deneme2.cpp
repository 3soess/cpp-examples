//
// Created by eslem on 12.11.2022.
//
#include <iostream>
using namespace std;
int main(){

for(int i=0;i<5;i++){
    for(int k=0;k<i;k++){
        cout << " ";
    }
    for(int j=0;j<5-i;j++){
        cout << "*";
    }
    cout << endl;
}


    return 0;
}