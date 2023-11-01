#include <iostream>
#include <string>
using namespace std;    

int main()
{
    string chaine("Bonjour !");
    chaine.erase(); // la fonction erase() permet de supprimer le contenu de la chaine
    
    cout << "La chaine contient : " << chaine << endl;
 
    return 0;
}