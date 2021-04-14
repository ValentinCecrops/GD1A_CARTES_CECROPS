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
        Monstre(std::string nom, int pv, int scoreAtk);
        Monstre();
};