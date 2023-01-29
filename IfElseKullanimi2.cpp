//
// Created by eslem on 10.11.2022.
//
#include <iostream>

using namespace std;

int main() {
int a;
cout << "Notunuzu ekrana giriniz. " << endl;
cin >> a;
if (a < 50)
{
cout << "Aldiginiz not: F" << endl;
}
else if (a < 70)
{
cout << "Aldiginiz not: C" << endl;
}
else if (a < 90)
{
cout << "Aldiginiz not: B" << endl;
}
else {
    cout << "Aldiginiz not: A" << endl;
}

    return 0;
}