#ifndef MAINH
#define MAINH

/*

codé pour la compétition robAfis 2011 pour l'équipe 7robot de l'N7.
Le robot sait :
- utiliser les moteurs
- utiliser les capteurs
- suivre une ligne pendant un certain temps
- gérer (monter et descendre) la pince
- afficher les valeurs des capteurs sur l'écran pour le debug
- afficher des erreurs sur l'écran pour le debug
- avancer (ou reculer) pendant un certain temps sans se soucier des lignes.
- s'arrêter

Le robot ne sait pas encore :
- reculer en suivant une ligne pendant un certain temps
- suivre une ligne (en avancant ou en reculant) jusqu'à ce que l'on arrive sur un carrefour
- avancer en suivant une ligne juqu'à une certaine distance d'un mur
- avancer jusqu'à ce qu'il rencontre une ligne
- chercher une ligne
- détecter un obstacle
- détecter la couleur d'une intersection
- se repérer sur le plateau (connaitre son emplacement actuel).
- faire demi-tour sur une ligne.
- tourner à une intersection

Le robot ne saura sans doute jamais :
- détecter les pièces
- savoir si il a réussi à prendre les pièces ou non
- savoir si il a réussi à poser les pièces au bon endroit ou non

Le langage utilisé est le nxc "Not eXactly C" très proche du C.
Quelques ajouts/différences par rapport au C :
 - type bool
 - type string
 - Wait au lieu de sleep
 - mot clef task
 - plusieurs fonctions de la bibiothèque C standard sont inconnues (par exemple sprintf)
 - les pointeurs n'existent pas ...??????????
 - les références existent.

 - Toutes les fontions utilisables sont documentées ici :
 http://bricxcc.sourceforge.net/nbc/nxcdoc/nxcapi/
*/




#define CAPTEUR_CONTACT     IN_1
#define CAPTEUR_VISUEL      IN_2
#define CAPTEUR_ULTRA       IN_4

#define MOTEUR_GAUCHE       OUT_A
#define MOTEUR_DROIT        OUT_B
#define PINCE               OUT_C

#define INFINI              3600000     // une heure
#define MAX                 100         // 100%
#define MIN                 0           // 0%
#define ANGLE_PINCE         40
#define NOIR                10
#define BLANC               50

void mission();

void vaChercherPetit();
void vaChercherGrand();
void ramene();
void rentre();

#endif
