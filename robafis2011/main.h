/*
Copyright 2011 club 7robot de l'N7
Code réutilisable librement sous les termes de la licence GPLv3 disponible à l'adresse :
http://www.gnu.org/licenses/gpl.txt

*/
#ifndef MAINH
#define MAINH

/*


codé pour la compétition robAfis 2011 pour le club 7robot de l'N7.
Le robot sait :
- utiliser les moteurs
- utiliser les capteurs
- suivre une ligne pendant un certain temps
- gérer (monter et descendre) la pince
- afficher les valeurs des capteurs sur l'écran pour le debug
- afficher des erreurs sur l'écran pour le debug
- avancer (ou reculer) pendant un certain temps sans se soucier des lignes.
- s'arrêter
- avancer en suivant une ligne juqu'à une certaine distance d'un mur
- avancer jusqu'à ce qu'il rencontre une ligne
- détecter un obstacle
- faire demi-tour sur une ligne.

Le robot ne saura sans doute jamais :
- savoir si il a réussi à prendre les pièces ou non
- savoir si il a réussi à poser les pièces au bon endroit ou non

Le langage utilisé est le nxc "Not eXactly C" très proche du C.
Quelques ajouts/différences par rapport au C :
 - type bool
 - type string
 - Wait au lieu de sleep
 - mot clef task
 - plusieurs fonctions de la bibiothèque C standard sont inconnues (par exemple sprintf)
 - les pointeurs n'existent pas.
 - les références existent.
 - pas de type double

 - Toutes les fontions utilisables sont documentées ici :
 http://bricxcc.sourceforge.net/nbc/nxcdoc/nxcapi/
*/




#define CAPTEUR_CONTACT     IN_1
#define CAPTEUR_VISUEL      IN_2
#define CAPTEUR_ULTRA       IN_4

#define MOTEUR_GAUCHE       OUT_A
#define MOTEUR_DROIT        OUT_B
#define MOTEURS             OUT_AB
#define PINCE               OUT_C

#define INFINI              60000       // une minute
#define MAX                 100         // 100%
#define MIN                 0           // 0%
#define ANGLE_PINCE         50          // 80°
#define VITESSE_PINCE       30
#define ANGLE_QUART_DE_TOUR 390         // déterminé
#define BUG                 1.15
#define NOIR                60.0
#define BLANC               150.0
#define DISTANCE_OBSTACLE   20
#define TOLERANCE_SUIVEUR   5.0         // dans le blanc et dans le noir

task mission();

bool cherchePetitRapide(bool reussi, bool petitDansCentre1);
bool chercheGrandRapide(bool reussi, bool petitDansCentre1);
bool cherchePetitLent(bool reussi, bool petitDansCentre1);
bool chercheGrandLent(bool reussi, bool petitDansCentre1);

bool rameneCentre1Rapide(bool reussi);
bool rameneCentre2Rapide(bool reussi);
bool rameneCentre1Lent(bool reussi);
bool rameneCentre2Lent(bool reussi);
void stockePetit();
void stockeGrand();

#endif
