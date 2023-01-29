//
// Created by eslem on 15.11.2022.
//
#include <iostream>
using namespace std;
int faktoriyel (int x){   //3! demek= 3 * 2 * 1 =6 //
int carpim=1;
for(int i=x;i>0;i--){
    carpim *= i;

}
return carpim;
}
int kombinasyon (int n,int r){
    return faktoriyel(n) / (faktoriyel(r) * faktoriyel(n-r));
}

int main(){
cout << faktoriyel(3) << endl;
cout << kombinasyon(5,2) << endl;
    return 0;
}