#include <stdio.h>


void main(void){
	int ent1;
	int ent2;
	printf("entrez le premier entier :");
	scanf("%d", &ent1);
	printf("entrez le deuxieme entier :");
	scanf("%d", &ent2);
	if (ent1 == 0 || ent2 == 0) {
    printf("produit nul");
	}
	else {
    if (ent1 > 0) {
        if (ent2 > 0) {
            printf("produit positif");
        }
        else {
            printf("produit negatif");
        }
    }
    else {
        if (ent2 > 0) {
            printf("produit negatif");
        }
        else {
            printf("produit positif");
        }
    }
}
}