#include <iostream>
using namespace std;

int main() {
    int a = 42;
    int &ref_a = a;   // Référence
    int *p_a = &a;    // Pointeur

    cout << "Valeur de a : " << a << endl;
    cout << "Adresse de a : " << &a << endl;

    cout << "Valeur de ref_a : " << ref_a << endl;
    cout << "Adresse de ref_a : " << &ref_a << endl;

    cout << "Valeur de p_a (adresse stockée) : " << p_a << endl;
    cout << "Valeur pointée par p_a : " << *p_a << endl;

    return 0;
}