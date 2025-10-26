#include <iostream>
using namespace std;

class NombreComplexe {
private:
    double re;
    double im;

public:
  
    NombreComplexe(double r=0, double i=0) { re=r; im=i; }


    void afficher() {
        cout << re << " + " << im << "i" << endl;
    }

   
    NombreComplexe operator+(const NombreComplexe &c) {
        return NombreComplexe(re + c.re, im + c.im);
    }

   
    NombreComplexe operator-(const NombreComplexe &c) {
        return NombreComplexe(re - c.re, im - c.im);
    }

    
    NombreComplexe operator*(const NombreComplexe &c) {
        return NombreComplexe(re*c.re - im*c.im, re*c.im + im*c.re);
    }

    NombreComplexe operator/(const NombreComplexe &c) {
        double denom = c.re*c.re + c.im*c.im;
        return NombreComplexe((re*c.re + im*c.im)/denom, (im*c.re - re*c.im)/denom);
    }

  
    bool operator==(const NombreComplexe &c) {
        return (re==c.re && im==c.im);
    }
};


int main() {
    double r1,i1,r2,i2;
    cout << "Entrez la partie réelle et imaginaire du 1er nombre : ";
    cin >> r1 >> i1;
    cout << "Entrez la partie réelle et imaginaire du 2e nombre : ";
    cin >> r2 >> i2;

    NombreComplexe c1(r1,i1), c2(r2,i2);

    int choix;
    cout << "\nMenu :\n1- Addition\n2- Soustraction\n3- Multiplication\n4- Division\n5- Egalité\nChoisir une opération : ";
    cin >> choix;

    switch(choix) {
        case 1: (c1+c2).afficher(); break;
        case 2: (c1-c2).afficher(); break;
        case 3: (c1*c2).afficher(); break;
        case 4: (c1/c2).afficher(); break;
        case 5: 
            if(c1==c2) cout << "Les nombres sont égaux.\n"; 
            else cout << "Les nombres sont différents.\n";
            break;
        default: cout << "Choix invalide\n";
    }

    return 0;
}