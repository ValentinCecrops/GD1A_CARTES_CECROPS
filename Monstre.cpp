#ifndef MONSTRE_CPP
#define MONSTRE_CPP

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
        bool getDispo();
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

bool Monstre::getDispo() {return _disponible;}

Monstre::Monstre(std::string nom, int pv, int scoreAtk) : _nom(nom), _pv(pv), _scoreAtk(scoreAtk), _disponible(true) {}

Monstre::Monstre() : _nom("Monstre"), _pv(100), _scoreAtk(20), _disponible(true) {}

#endif