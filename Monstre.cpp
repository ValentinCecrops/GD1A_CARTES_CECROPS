#include <iostream>
#include <string>
#include "Monstre.h"

/*
    private:
        std::string _nom;
        int _pv;
        int _scoreAtk;
        bool _disponible;
    public:
        void afficher();
        void attaquer(int scoreAtkEnnemi);
        int getScoreAtk();
        Monstre(std::string nom, int pv, int scoreAtk);
        Monstre();
*/

void Monstre::afficher()
{
    std::cout << "Statistiques de " << _nom << " :" << std::endl;
    std::cout << "Santé : " << _pv << " PV" << std::endl;
    std::cout << "Score d'attaque : " << _scoreAtk << std::endl;
    if (_disponible) {std::cout << "Disponible : Oui" << std::endl << std::endl;}
    else {std::cout << "Disponible : Non" << std::endl << std::endl;}
}

void Monstre::attaquer(int scoreAtkEnnemi)
{
    _pv -= scoreAtkEnnemi;
    _disponible = false;
}

int Monstre::getScoreAtk() {return _scoreAtk;}

Monstre::Monstre(std::string nom, int pv, int scoreAtk) : _nom(nom), _pv(pv), _scoreAtk(scoreAtk), _disponible(true) {}

Monstre::Monstre() : _nom("Claudio"), _pv(200), _scoreAtk(20), _disponible(true) {}