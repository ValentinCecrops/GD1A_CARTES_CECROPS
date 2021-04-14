#ifndef MAGE_H
#define MAGE_H

#include <string>
#include <vector>
#include "Monstre.cpp"

class Mage
{
    private:
        std::string _nom;
        int _pv;
        std::vector<Monstre> _zoneDeJeu;
    public:
        void afficher();
        void attaquerMonstre(int monstre, int scoreAtkEnnemi);
        void attaquerMage(int monstre);
        void perdPv(int scoreAtkEnnemi);
        int getScoreAtkMonstre(int monstre);
        Mage(std::string nom, int pv);
        Mage();
};

#endif