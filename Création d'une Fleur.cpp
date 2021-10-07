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