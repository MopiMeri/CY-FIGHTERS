gi#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include <unistd.h>

typedef struct{
	int attaque;
	int defense;
	int esquive;
	int vitesse;
	int hp;
	int hpmax;
}statistiques;

typedef struct{
	char *nom[3];
	int degat;
}attaqueD;

typedef struct{
	char nom[15];
	statistiques ap;
}attaqueP;

typedef struct{
	char *prenom[1];
	statistiques stats;
	attaqueD a[2];
	int classe;
}Personnage;

typedef struct{
	Personnage equipe[1];
	int te;
}Equipe;

Personnage statperso(Personnage a);
void affiche_stat(Personnage joueur);
int choix_attaque();
int verif_perso(Equipe a, int b);
Personnage tour_combat(Personnage a, Personnage b);
Personnage tour_combat_adv(Personnage a, Personnage b);
void combat(Equipe Allie, Equipe Ennemi);
Personnage attrib_classe(Personnage a);
