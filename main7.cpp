#include <iostream>
#include <string>
using namespace std;

class Voiture {
private:
    string marque;
    string modele;
    int annee;
    float kilometrage;
    float vitesse;

public:
    Voiture() {
        marque = "Inconnue";
        modele = "Inconnu";
        annee = 0;
        kilometrage = 0;
        vitesse = 0;
    }
    Voiture(string m, string mo, int a, float km, float v) {
        marque = m;
        modele = mo;
        annee = a;
        kilometrage = km;
        vitesse = v;
    }

    void accelerer(float valeur) {
        vitesse += valeur;
    }

    void freiner(float valeur) {
        vitesse -= valeur;
        if (vitesse < 0) vitesse = 0;
    }

    void avancer(float distance) {
        kilometrage += distance;
    }

    void afficherInfo() {
        cout << "Marque : " << marque << "\n";
        cout << "Modèle : " << modele << "\n";
        cout << "Année : " << annee << "\n";
        cout << "Kilométrage : " << kilometrage << " km\n";
        cout << "Vitesse : " << vitesse << " km/h\n";
    }

    ~Voiture() {
        cout << "La voiture " << marque << " " << modele << " est détruite." << endl;
    }
};

int main() {
    Voiture v1("Toyota", "Corolla", 2020, 15000, 0);
    v1.afficherInfo();
    v1.accelerer(50);
    v1.avancer(100);
    v1.freiner(20);
    v1.afficherInfo();
    return 0;
}