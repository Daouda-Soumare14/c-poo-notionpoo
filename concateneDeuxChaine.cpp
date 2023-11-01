#include <iostream>
#include <string>
using namespace std;

int main()
{
    string chaine1("Bonjour !");
    string chaine2("Comment allez-vous ?");
    string chaine3;
 
    chaine3 = chaine1 + "" + chaine2; // 3... 2... 1... Concaténatioooooon
    cout << chaine3 << endl;
 
    return 0;
}