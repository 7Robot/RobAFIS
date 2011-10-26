#ifndef SUIVEURH
#define SUIVEURH



void suitLaLigneEnAvancant(int temps, int vitesse, bool droite = true);
void suitLaLigneEnAvancantDistance(int distance, int vitesse, bool droite = true);
bool determineVitesseMoteur(int valeurVisuel, int vitesse, bool droite);
void suitLaLigneEnReculant(int temps, int vitesse, bool droite = true);
void avanceJusquANoir(int vitesse);
void avanceJusquAPasBlanc(int vitesse);
void avanceJusquABlanc(int vitesse);
void demiTour(int vitesse);

#endif
