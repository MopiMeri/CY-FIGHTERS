#include "header.h"

int main(){
	srand(time(NULL));
	int a,rep1,rep2,alea;
	
	Personnage perso1;
	Personnage perso2;
	Personnage perso3;
	Personnage perso4;
	
	perso1.prenom[0] = "ECAFLIP";
	perso1 = attrib_classe(perso1);
	perso1 = statperso(perso1);
	perso1.a[0].nom[0] = "CHARGE";
	perso1.a[0].degat = perso1.stats.attaque;
	perso1.a[1].nom[0] = "Épée démoniaque";
	perso1.a[1].degat = 500;
	affiche_stat(perso1);
	
	perso2.prenom[0] = "ENIRIPSA";
	perso2 = attrib_classe(perso2);
	perso2 = statperso(perso2);
	perso2.a[0].nom[0] = "CHARGE";
	perso2.a[0].degat = perso2.stats.attaque;
	perso2.a[1].nom[0] = "Épée démoniaque";
	perso2.a[1].degat = 500;
	affiche_stat(perso2);
	
	perso3.prenom[0] = "IOP";
	perso3 = attrib_classe(perso3);
	perso3 = statperso(perso3);
	perso3.a[0].nom[0] = "CHARGE";
	perso3.a[0].degat = perso3.stats.attaque;
	perso3.a[1].nom[0] = "Épée démoniaque";
	perso3.a[1].degat = 500;
	affiche_stat(perso3);
	
	perso4.prenom[0] = "OSAMODAS";
	perso4 = attrib_classe(perso4);
	perso4 = statperso(perso4);
	perso4.a[0].nom[0] = "CHARGE";
	perso4.a[0].degat = perso4.stats.attaque;
	perso4.a[1].nom[0] = "Épée démoniaque";
	perso4.a[1].degat = 500;
	affiche_stat(perso4);
	
	Equipe Allie;
	Equipe Ennemi;
	
	while(1){
		printf("Parmi tous les personnages ci-dessous, qui voulez vous dans votre équipe ?\n");
		printf("1 : %s\n2 : %s\n3 : %s\n4 : %s\n\n",perso1.prenom[0],perso2.prenom[0],perso3.prenom[0],perso4.prenom[0]);
		scanf("%d",&rep1);
		scanf("%d",&rep2);
		break;
	}
	if (rep1 == 1){
		Allie.equipe[0] = perso1;
	}
	if (rep1 == 2){
		Allie.equipe[0] = perso2;
	}
	if (rep1 == 3){
		Allie.equipe[0] = perso3;
	}
	if (rep1 == 4){
		Allie.equipe[0] = perso4;
	}
	
	if (rep2 == 1){
		Allie.equipe[1] = perso1;
	}
	if (rep2 == 2){
		Allie.equipe[1] = perso2;
	}
	if (rep2 == 3){
		Allie.equipe[1] = perso3;
	}
	if (rep2 == 4){
		Allie.equipe[1] = perso4;
	}
	printf("Voici donc votre équipe :\n- %s\n- %s\n\n",Allie.equipe[0].prenom[0],Allie.equipe[1].prenom[0]);
	
	for(int i = 0;i<2;i++){
		alea = rand()%5;
		if ( alea == 0){
			Ennemi.equipe[i] = perso1;
		}
		else if(alea == 1){
			Ennemi.equipe[i] = perso2;
		}
		else if(alea == 3){
			Ennemi.equipe[i] = perso3;
		}
		else if(alea == 4){
			Ennemi.equipe[i] = perso4;
		}
	}
	printf("Vous affronterez l'équipe suivante :\n- %s\n- %s\n\n",Ennemi.equipe[0].prenom[0],Ennemi.equipe[1].prenom[0]);
	
	combat(Allie,Ennemi);
	return 0;	
}
