#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "ingresar valor a: ";
    cin >> a;
    cout << "ingresar valor b: ";
    cin >> b;
    cout << "ingresar valor c: ";
    cin >> c;

    if (a > b && a > c) {
        cout << "el mayor es a: " << a << endl;
    } else if (b > c) {
        cout << "el mayor es b: " << b << endl;
    } else {
        cout << "el mayor es c: " << c << endl; //No supe como evitar q salga el mensaje cuando son valores iguales y como hacerlos por separado si 2 son iguales
    }

    if (a == b && b == c) {
        cout << "los valores son iguales" << endl;
    }

    return 0;
}

