#include "header.h"

Personnage attrib_classe(Personnage a){
		int alea = rand()%7;
		a.classe = alea;
		return a;
}

Personnage statperso(Personnage a){
		if (a.classe == 1){ //MAGE
			a.stats.attaque = rand()%51 + 250;
			a.stats.defense = rand()%21 + 100;
			a.stats.vitesse = rand()%8 + 98;
			a.stats.hp = rand()%201 + 1800;
			return a;
		}
		else if (a.classe == 2){ //COMBATTANT
			a.stats.attaque = rand()%51 + 200;
			a.stats.defense = rand()%21 + 120;
			a.stats.vitesse = rand()%11 + 90;
			a.stats.hp = rand()%101 + 2000;
			return a;
		}
		else if (a.classe == 3){ //TANK
			a.stats.attaque = rand()%31 + 150;
			a.stats.defense = rand()%31 + 150;
			a.stats.vitesse = rand()%16 + 80;
			a.stats.hp = rand()%201 + 2500;
			return a;
		}
		else if (a.classe == 4){ //ARCHER
			a.stats.attaque = rand()%56 + 280;
			a.stats.defense = rand()%31 + 50;
			a.stats.vitesse = rand()%16 + 100;
			a.stats.hp = rand()%201 + 1500;
			return a;
		}
		else if (a.classe == 5){ //SOIGNEUR
			a.stats.attaque = rand()%51 + 250;
			a.stats.defense = rand()%21 + 100;
			a.stats.vitesse = rand()%8 + 98;
			a.stats.hp = rand()%201 + 1800;
			return a;
		}
		else if (a.classe == 6){ //ASSASSIN
			a.stats.attaque = rand()%51 + 270;
			a.stats.defense = rand()%31 + 80;
			a.stats.vitesse = rand()%16 + 105;
			a.stats.hp = rand()%201 + 1600;
			return a;
		}
}

void affiche_stat(Personnage joueur){
		printf("Voici les statistiques de %s :\n",joueur.prenom[0]);
		printf("Attaque : %d\nDéfense :%d\nVitesse : %d\nHP : %d\n",joueur.stats.attaque,joueur.stats.defense,joueur.stats.vitesse,joueur.stats.hp);
		if (joueur.classe == 1){ //MAGE
			printf("Classe : Mage\n\n");
		}
		else if (joueur.classe == 2){ //COMBATTANT
			printf("Classe : Combattant\n\n");
		}
		else if (joueur.classe == 3){ //TANK
			printf("Classe : Tank\n\n");
		}
		else if (joueur.classe == 4){ //ARCHER
			printf("Classe : Archer\n\n");
		}
		else if (joueur.classe == 5){ //SOIGNEUR
			printf("Classe : Soigneur\n\n");
		}
		else if (joueur.classe == 6){ //ASSASSIN
			printf("Classe : Assassin\n\n");
		}
}

int choix_attaque(){
	sleep(3);
	int reponse;
	printf("Quelle attaque choisis-tu ?\n\nVoici la liste de tes attaques :\n");
	printf("1. Charge            2. Épée démoniaque\n");
	scanf("%d",&reponse);
	if (reponse == 1){
		return 1;
	}
	else if (reponse == 2){
		return 2;
	}
}

int verif_perso(Equipe a, int b){
	if ( a.equipe[b].stats.hp == 0 ){
		return 0;
	}
	return 1;
}
