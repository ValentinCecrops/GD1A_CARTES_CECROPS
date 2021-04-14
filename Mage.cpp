#ifndef MAGE_CPP
#define MAGE_CPP

#include <iostream>
#include <string>
#include "Mage.h"

/*
    private:
        std::string _nom;
        int _pv;
        std::vector<Monstre> _zoneDeJeu;
    public:
        void afficher();
        void attaquerMonstre(int scoreAtkEnnemi);
        void attaquerMage();
        void perdPv(int scoreAtkEnnemi);
        int getScoreAtkMonstre();
        Mage(std::string nom, int pv);
        Mage();
*/

void Mage::afficher()
{
    std::cout << "Statistiques de " << _nom << " :" << std::endl;
    std::cout << "Santé : " << _pv << " PV" << std::endl << std::endl;
    std::cout << "Zone de jeu :" << std::endl << std::endl;
    for (int i = 0 ; i < _zoneDeJeu.size() ; i++)
    {
        std::cout << i << ": ";
        _zoneDeJeu[i].afficher();
    }
}

void Mage::attaquerMonstre(int monstre, int scoreAtkEnnemi) {_zoneDeJeu[monstre].attaquer(scoreAtkEnnemi);}

void Mage::attaquerMage(int monstre) {_zoneDeJeu[monstre].attaquer(0);}

void Mage::perdPv(int scoreAtkEnnemi) {_pv -= scoreAtkEnnemi;}

int Mage::getScoreAtkMonstre(int monstre) {return _zoneDeJeu[monstre].getScoreAtk();}

Mage::Mage(std::string nom, int pv) : _nom(nom), _pv(pv), _zoneDeJeu(std::vector<Monstre>(1, Monstre("Monstre", 100, 30))) {}

Mage::Mage() : _nom("Mage"), _pv(200), _zoneDeJeu(std::vector<Monstre>(1, Monstre("Monstre", 100, 30))) {}

#endif