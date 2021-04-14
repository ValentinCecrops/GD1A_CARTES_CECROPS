#include <iostream>
#include <string>
#include "Monstre.cpp"
#include "Mage.cpp"

using namespace std;

int main()
{
    Mage joueur1 = Mage("Joueur 1", 200);
    Mage joueur2 = Mage("Joueur 2", 200);

    int choix;
    int choixMonstre;
    int choixMonstreEnnemi;

    joueur1.afficher();
    joueur2.afficher();

    while (true)
    {
        //Tour j1
        cout << "Joueur 1, que voulez vous faire ?" << endl;
        cout << "1: Afficher vos statistiques" << endl;
        cout << "2: Attaquer un monstre adverse" << endl;
        cout << "3: Attaquer le mage adverse" << endl;
        cin >> choix;
        switch (choix)
        {
        case 1:
            joueur1.afficher();
            break;

        case 2:
            break;
            cout << "Quel monstre envoyer ?" << endl;
            joueur1.afficher();
            cin >> choixMonstre;
            cout << "Quel monstre attaquer ?" << endl;
            joueur2.afficher();
            cin >> choixMonstreEnnemi;
            joueur1.attaquerMonstre(choixMonstre, joueur2.getScoreAtkMonstre(choixMonstreEnnemi));
            joueur2.attaquerMonstre(choixMonstreEnnemi, joueur1.getScoreAtkMonstre(choixMonstre));
        
        case 3:
            cout << "Quel monstre envoyer ?" << endl;
            joueur1.afficher();
            cin >> choixMonstre;
            joueur1.attaquerMage(choixMonstre);
            joueur2.perdPv(joueur1.getScoreAtkMonstre(choixMonstre));
            break;

        default:
            break;
        }

        //Tour j2
        cout << "Joueur 2, que voulez vous faire ?" << endl;
        cout << "1: Afficher vos statistiques" << endl;
        cout << "2: Attaquer un monstre adverse" << endl;
        cout << "3: Attaquer le mage adverse" << endl;
        cin >> choix;
        switch (choix)
        {
        case 1:
            joueur2.afficher();
            break;

        case 2:
            break;
            cout << "Quel monstre envoyer ?" << endl;
            joueur2.afficher();
            cin >> choixMonstre;
            cout << "Quel monstre attaquer ?" << endl;
            joueur1.afficher();
            cin >> choixMonstreEnnemi;
            joueur2.attaquerMonstre(choixMonstre, joueur1.getScoreAtkMonstre(choixMonstreEnnemi));
            joueur1.attaquerMonstre(choixMonstreEnnemi, joueur2.getScoreAtkMonstre(choixMonstre));
        
        case 3:
            cout << "Quel monstre envoyer ?" << endl;
            joueur2.afficher();
            cin >> choixMonstre;
            joueur2.attaquerMage(choixMonstre);
            joueur1.perdPv(joueur2.getScoreAtkMonstre(choixMonstre));
            break;

        default:
            break;
        }
    }
}