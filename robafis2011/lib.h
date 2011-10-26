#ifndef LIBH
#define LIBH

task arretDurgence();
void afficheCapteurs();
void attendDepart();
void afficheErreurInt(int erreur);
void remontePince(int valeur);
void descendPince(int valeur);
void avancePendant(int temps, int puiss);
void reculePendant(int temps, int puiss);
void tourne(byte moteur, int puiss);

void afficheErreur(string erreur);

void initialiseCapteurs();
void revient();
void stopMoteur();
void echange(int& val1, int& val2);



#endif
