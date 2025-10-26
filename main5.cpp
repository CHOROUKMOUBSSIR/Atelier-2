// methode1
#include <iostream>
using namespace std;

void incrementer(int *x) {
    (*x)++;
}

void permuter(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int a = 5, b = 10;

    incrementer(&a);
    cout << "a après incrementation = " << a << endl;

    permuter(&a, &b);
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
// methode 2

void incrementer(int &x) {
    x++;
}

void permuter(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int a = 5, b = 10;

    incrementer(a);
    cout << "a après incrementation = " << a << endl;

    permuter(a, b);
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}