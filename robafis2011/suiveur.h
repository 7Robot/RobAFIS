#ifndef SUIVEURH
#define SUIVEURH



void suitLaLigneEnAvancant(int temps, int vitesse, bool droite = true);
bool suitLaLigneEnAvancantCouleur(int couleur, int vitesse, bool droite = true, bool detection = false);
void suitLaLigneEnAvancantDistance(int distance, int vitesse, bool droite = true);
bool determineVitesseMoteur(unsigned int valeurVisuel, int couleur, int vitesse, bool droite);
void corrige(float vitesse, float valeurVisuel, float valeurNoir, float valeurBlanc, int droite);
void suitLaLigneEnReculant(int temps, int vitesse, bool droite = true);
void avanceJusquANoir(int vitesse, int couleur = BLEU);
void reculeJusquANoir(int vitesse, int couleur = BLEU);
void avanceJusquAPasBlanc(int vitesse, int couleur = BLEU);
void avanceJusquABlanc(int vitesse, int couleur = BLEU);
void reculeJusquABlanc(int vitesse, int couleur = BLEU);
void demiTour(int vitesse);

#endif
