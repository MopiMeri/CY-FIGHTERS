#include "header.h"

Personnage tour_combat(Personnage a, Personnage b){
	int ca,degat;
	printf("%s va attaquer\n",a.prenom[0]);
	sleep(1);
	ca = choix_attaque();
	if (ca == 1){
		printf("Il utilise l'attaque %s\n",a.a[0].nom[0]);
		degat = a.a[0].degat - (b.stats.defense / 2);
	}
	else if (ca == 2){
		printf("Il utilise l'attaque %s\n",a.a[1].nom[0]);
		degat = a.a[1].degat - (b.stats.defense / 2);
	}
	b.stats.hp = b.stats.hp - degat;
	printf("Il inflige %d DMG à %s ! Il lui reste %d HP ..\n",degat,b.prenom[0],b.stats.hp);
	sleep(1);
	return b;
	
}

Personnage tour_combat_adv(Personnage a, Personnage b){
	int degat;
	printf("%s va attaquer\n",a.prenom[0]);
	sleep(1);
	printf("Il utilise l'attaque %s\n",a.a[0].nom[0]);
	degat = a.a[0].degat - (b.stats.defense / 2);
	b.stats.hp = b.stats.hp - degat;
	printf("Il inflige %d DMG à %s ! Il lui reste %d HP ..\n",degat,b.prenom[0],b.stats.hp);
	sleep(1);
	return b;
}
void combat(Equipe Allie, Equipe Ennemi){
	Allie.te = 1;
	Ennemi.te = 1;
	printf("Que le combat commence !\n");
	sleep(1);
	while(Allie.te != 0 && Ennemi.te != 0){
		if(Allie.equipe[0].stats.vitesse > Ennemi.equipe[0].stats.vitesse){
			Ennemi.equipe[0] = tour_combat(Allie.equipe[0],Ennemi.equipe[0]);
			if ( Ennemi.equipe[0].stats.hp < 0 ){
				printf("%s est mort ! Victoire pour l'équipe Allié !\n",Ennemi.equipe[0].prenom[0]);
				Ennemi.te = 0;
			}
			Allie.equipe[0] = tour_combat_adv(Ennemi.equipe[0],Allie.equipe[0]);
			if ( Allie.equipe[0].stats.hp < 0 ){
				printf("%s est mort ! Victoire pour l'équipe Allié !\n",Allie.equipe[0].prenom[0]);
				Allie.te = 0;
			}
		}
		else{
			Allie.equipe[0] = tour_combat_adv(Ennemi.equipe[0],Allie.equipe[0]);
			if ( Allie.equipe[0].stats.hp < 0 ){
				printf("%s est mort ! Victoire pour l'équipe Allié !\n",Allie.equipe[0].prenom[0]);
				Allie.te = 0;
			}
			Ennemi.equipe[0] = tour_combat(Allie.equipe[0],Ennemi.equipe[0]);
			if ( Ennemi.equipe[0].stats.hp < 0 ){
				printf("%s est mort ! Victoire pour l'équipe Allié !\n",Ennemi.equipe[0].prenom[0]);
				Ennemi.te = 0;
			}
		}
	}
}
