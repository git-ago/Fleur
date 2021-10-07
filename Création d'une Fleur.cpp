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

    // Méthodes
    void afficher()
    {
        std::cout << fleur.taille << std::endl;
        std::cout << fleur.poids << std::endl;
        std::cout << fleur.identifiant << std::endl;
        std::cout << fleur.nombrePetales << std::endl;
    }

    void perdUnePetale()
    {
        this.nombrePetales = this.nombrePetales-1;
        if (this.nombrePetales<0)
        {
            this.nombrePetales=0;
        }
    }

    void estAdulte()
    {
        If (this.nombrePetales >= 3 && this.taille >= 10)
        {
            return false;
        }else{
            return true;
        }
    }

    void pousse(float grow)
    {
        if (grow<0)
        {
            return;
        }else{
            this.taille += grow;
        }
    }

    void tomber(){}
}


int main()
{
    // Création d’un objet Fleur
   Fleur fleur(2.3f, 10.0f, 'Hibiscus', 30);

    int petalesRestants=0;
    petalesRestants=30-fleur.nombrePetales;
    std::cout << 'Nombre de pétales restants : ' << petalesRestants << std::endl;

    estAdulte();

    pousse(10.0f);

    return 0;
}
