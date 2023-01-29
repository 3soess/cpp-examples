//
// Created by eslem on 10.11.2022.
//
#include <iostream>

using namespace std;

int main() {

for (int i = 1; i <= 9; i++) {
if (i % 2 == 1) {
for (int j = 4; j >= i; j--) {
cout << " ";
}
for (int k = 0; k < i; k++) {

cout << "*";
}
cout << endl;
}

}
    return 0;
}