#include <iostream>
using namespace std;
void compteurAppel(){
    static int compteur = 0;
    compteur++;
    cout << "appel numéro " << compteur << endl;
}
int main(){ 
    compteurAppel();
    compteurAppel();
    compteurAppel();

}