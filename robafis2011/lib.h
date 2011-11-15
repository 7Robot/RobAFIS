#ifndef LIBH
#define LIBH

enum {GAUCHE, DROITE, NON_CONNU};
enum {VERT, JAUNE, GRIS, ROUGE, BLEU};

task arretDUrgence();
task afficheCapteurs();
bool recupereTypeFile();
int recupereChoixDirection();
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
float signe(float valeur);
void avanceSynchro(int vitesse);
void reculeSynchro(int vitesse);
void tourneDroite(int angle, int vitesse = MAX);
void tourneGauche(int angle);
void verifieBatterie();
void bloquePince();
int recupereBleu();
int recupereRouge();
int recupereCouleur(int coul);

#endif
