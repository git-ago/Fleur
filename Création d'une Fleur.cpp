#include <iostream>

class Fleur
{
    public:
    // Constructeur
    Fleur(float inTaille, float inPoids, string inIdentifiant, int inNombrePetales)
    {
        taille = inTaille;
        poids = inPoids;
        identifiant = inIdentifiant;
        nombrePetales = inNombrePetales;
    }
    // Attributs
    float taille;
    float poids;
    string identifiant;
    int nombrePetales;

    // M�thodes
    void afficher()
    {
        std::cout << fleur.taille << std::endl;
        std::cout << fleur.poids << std::endl;
        std::cout << fleur.identifiant << std::endl;
        std::cout << fleur.nombrePetales << std::endl;
    }

    void tomber(){}

}


int main()
{
    // Cr�ation d�un objet Fleur
   Fleur fleur(2.3f, 10.0f, 'Hibiscus', 30);
    return 0;
}
