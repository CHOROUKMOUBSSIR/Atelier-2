// METHODE 1
#include <iostream> 
using namespace std;

int main() {
    int tab[10];
    int i, min, max;

    cout << "Entrez 10 entiers : " << endl;
    for (i = 0; i < 10; i++) {
        cout << "tab[" << i << "] = ";
        cin >> tab[i];
    }

    min = max = tab[0];

    for (i = 1; i < 10; i++) {
        if (tab[i] < min) min = tab[i];
        if (tab[i] > max) max = tab[i];
    }

    cout << "Le plus petit = " << min << endl;
    cout << "Le plus grand = " << max << endl;

    return 0;
}
// METHODE 2
int main() {
    int tab[10];
    int *p = tab;
    int min, max;

    cout << "Entrez 10 entiers : " << endl;
    for (int i = 0; i < 10; i++) {
        cout << "tab[" << i << "] = ";
        cin >> *(p + i);  // Utilisation du pointeur
    }

    min = max = *p;

    for (int i = 1; i < 10; i++) {
        if (*(p + i) < min) min = *(p + i);
        if (*(p + i) > max) max = *(p + i);
    }

    cout << "Le plus petit = " << min << endl;
    cout << "Le plus grand = " << max << endl;

    return 0;
}