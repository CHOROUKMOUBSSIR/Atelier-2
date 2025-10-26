#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Entrez la taille du tableau : ";
    cin >> n;

    // Allocation dynamique
    int* tab = new int[n];

    cout << "Entrez " << n << " entiers : " << endl;
    for (int i = 0; i < n; i++) {
        cin >> tab[i];
    }

    // Création d'un second tableau dynamique (copie du premier)
    int* tab2 = new int[n];
    for (int i = 0; i < n; i++) {
        tab2[i] = tab[i];
    }

    // Suppression du premier tableau
    delete[] tab;

    // Affichage du second
    cout << "Contenu du second tableau : ";
    for (int i = 0; i < n; i++) {
        cout << tab2[i] << " ";
    }
    cout << endl;

    // Suppression du second tableau
    delete[] tab2;

    return 0;
}