//
// Created by eslem on 16.11.2022.
//
#include <iostream>
using namespace std;
int faktoriyel (int x){
    if(x==1)
        return 1;
    return x * faktoriyel(x-1);
}

int main(){
cout << faktoriyel(4) << endl;

    return 0;
}