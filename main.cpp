#include <iostream>
#include <string>
#include "Monstre.cpp"

using namespace std;

int main()
{
    Monstre monstre1 = Monstre("Le 1", 100, 40);
    Monstre monstre2 = Monstre("Le 2", 100, 30);

    monstre1.afficher();
    monstre2.afficher();
    monstre1.attaquer(monstre2.getScoreAtk());
    monstre2.attaquer(monstre1.getScoreAtk());
    monstre1.afficher();
    monstre2.afficher();
}