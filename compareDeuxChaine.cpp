#include <iostream>
#include <string>
using namespace std;

int main()
{
    string chaine1("Bonjour !");
    string chaine2("Comment allez-vous ?");
 
    if (chaine1 == chaine2) // Faux
    {
        cout << "Les chaines sont identiques." << endl;
    }
    else
    {
        cout << "Les chaines sont differentes." << endl;
    }
 
    return 0;
}