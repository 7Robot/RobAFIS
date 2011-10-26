#ifndef LIBH
#define LIBH

enum {BLANCHE, NOIRE, VERTE, JAUNE, GRISE};

task arretDurgence();
void afficheCapteurs();
void attendDepart();
void afficheErreurInt(int erreur);
void remontePince(int valeur);
void descendPince(int valeur);
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
