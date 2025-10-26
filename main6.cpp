#include <iostream>
#include <string>
using namespace std;

void permuter(string &str, int debut, int fin) {
    if (debut == fin) {
        cout << str << endl;
    } else {
        for (int i = debut; i <= fin; i++) {
            swap(str[debut], str[i]);         // Échanger les caractères
            permuter(str, debut + 1, fin);    // Appel récursif
            swap(str[debut], str[i]);         // Rétablir l'ordre initial
        }
    }
}

int main() {
    string mot;
    cout << "Entrez une chaîne : ";
    cin >> mot;

    cout << "Permutations possibles :" << endl;
    permuter(mot, 0, mot.size() - 1);

    return 0;
}