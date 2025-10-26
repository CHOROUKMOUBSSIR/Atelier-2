#include <iostream>
#include <cmath>
using namespace std;

class Vecteur3D {
private:
    float x, y, z;

public:
    
    Vecteur3D(float a = 0, float b = 0, float c = 0) {
        x = a; y = b; z = c;
    }

    
    void afficher() {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }

    
    Vecteur3D somme(const Vecteur3D &v) {
        return Vecteur3D(x + v.x, y + v.y, z + v.z);
    }

   
    float produitScalaire(const Vecteur3D &v) {
        return x*v.x + y*v.y + z*v.z;
    }

   
    bool coincide(const Vecteur3D &v) {
        return (x == v.x && y == v.y && z == v.z);
    }

   
    float norme() {
        return sqrt(x*x + y*y + z*z);
    }

    
    Vecteur3D normax_valeur(const Vecteur3D &v) {
        return (this->norme() > v.norme()) ? *this : v;
    }

    Vecteur3D* normax_adresse(Vecteur3D *v) {
        return (this->norme() > v->norme()) ? this : v;
    }

    
    Vecteur3D& normax_reference(Vecteur3D &v) {
        return (this->norme() > v.norme()) ? *this : v;
    }
};

int main() {
    Vecteur3D v1(1,2,3);
    Vecteur3D v2(4,5,6);

    cout << "V1 : "; v1.afficher();
    cout << "V2 : "; v2.afficher();

    Vecteur3D v3 = v1.somme(v2);
    cout << "Somme V1+V2 : "; v3.afficher();

    cout << "Produit scalaire : " << v1.produitScalaire(v2) << endl;

    cout << "Norme V1 : " << v1.norme() << endl;

    Vecteur3D vmax = v1.normax_valeur(v2);
    cout << "Vecteur avec norme max (valeur) : "; vmax.afficher();

    Vecteur3D* vmax2 = v1.normax_adresse(&v2);
    cout << "Vecteur avec norme max (adresse) : "; vmax2->afficher();

    Vecteur3D& vmax3 = v1.normax_reference(v2);
    cout << "Vecteur avec norme max (référence) : "; vmax3.afficher();

    return 0;
}