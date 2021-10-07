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
}

int main()
{
    // Création d’un objet Fleur
   Fleur fleur(2.3f, 10.0f, 'Hibiscus', 30);
    return 0;
}