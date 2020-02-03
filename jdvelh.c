#include <stdio.h>
#include <string.h>

struct Chemin{
	char nomchemin[30];
	int direction;
};

typedef struct Chemin chemin;

int main(){
    
    chemin gauche = {"Route du désespoir",1};
    chemin droite = {"Route de la lumière",2};
	int choix ;
	int cheminG1 = 0;
	int cheminD1 = 0;

printf("Vous arriver devant un panneau direction quel chemin prendrez-vous! \n");

printf("[1] Route du désespoir \n [2] Route de la lumière");
    scanf("%d", &choix);

    if (choix == 1){
    	printf(" [1] %s \n", gauche.nomchemin, gauche.direction);
    		printf("Bonne chance à travers cette route de danger obscure \n");
    }

    if (choix == 2){
    	printf(" [2] %s \n", droite.nomchemin, droite.direction);
			printf("Rien ne vous arrivera sur se chemin profiter de la vue \n");
    }

    return 0;
}
