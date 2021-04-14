#ifndef MONSTRE_H
#define MONSTRE_H

#include <string>

class Monstre
{
    private:
        std::string _nom;
        int _pv;
        int _scoreAtk;
        bool _disponible;
    public:
        void afficher();
        void attaquer(int scoreAtkEnnemi);
        int getScoreAtk();
        bool getDispo();
        Monstre(std::string nom, int pv, int scoreAtk);
        Monstre();
};

#endif