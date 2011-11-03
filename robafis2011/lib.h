#ifndef LIBH
#define LIBH

enum {BLANCHE, NOIRE, VERTE, JAUNE, GRISE};

task arretDurgence();
task afficheCapteurs();
bool attendDepart();
void afficheErreurInt(int erreur);
void remontePince(int vitesse = VITESSE_PINCE, int valeur = ANGLE_PINCE);
void descendPince(int vitesse = VITESSE_PINCE, int valeur = ANGLE_PINCE);
void avancePendant(int temps, int vitesse);
void reculePendant(int temps, int vitesse);
void tourne(byte moteur, int vitesse);

void afficheErreur(string erreur);

void initialiseCapteurs();
void revient();
void stopMoteur();
void echange(int& val1, int& val2);
int determineCouleur();
int signe(float valeur);
void avanceSynchro(int vitesse);
void reculeSynchro(int vitesse);
void tourneDroite(int angle);
void tourneGauche(int angle);

#endif
