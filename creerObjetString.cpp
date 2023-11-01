#include <iostream>
#include <string> // Obligatoire pour pouvoir utiliser les objets string
 
using namespace std;
 
 
int main()
{
    // la creation d'un objet ce fait comme une variable
    string maChaine("Bonjour"); //Création d'un objet 'maChaine' de type string et initialisation

    cout << maChaine <<endl;

    // Affecter une valeur a la chaine apres declaration
    maChaine = "Bien le bonjour !";
    cout << maChaine << endl;
 
    return 0;
}