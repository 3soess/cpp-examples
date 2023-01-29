//
// Created by eslem on 10.11.2022.
//
#include <iostream>

using namespace std;

int main() {
int a = 10;
if (a > 20) // <= , < , > , >= , !=, == .Bunlar sık kullandığımız boolean operatörler. //
{ //boolean : True / false // doğru ise yazacak. Doğru değil ise yazmayacak. //
cout << "A 20'den buyuk. " << endl;
}
else if (a == 20) {
cout << "A 20'ye esit" << endl;

}
else {
cout << "A 20'den kucuk" << endl;

}
    return 0;
}