#include <iostream>
#include <string>
using namespace std;

int main()
{
    string chaine("Bonjour !");
    cout << chaine.substr(3) << endl; // substr permet de couper la chaine a partir de la 3eme caractere



// Bingo ! On a demandé à prendre 4 caractères en partant du caractère n° 3, ce qui fait
//  qu'on a récupéré "jour".
    string chaine("Bonjour !");
    cout << chaine.substr(3, 4) << endl;


// Il existe une autre manière de faire pour accéder à un seul caractère. On utilise 
// les crochets [ ]  comme pour les tableaux.

    string chaine("Bonjour !");
    cout << chaine[3] << endl;  //Affiche la lettre 'j'
    return 0;
}