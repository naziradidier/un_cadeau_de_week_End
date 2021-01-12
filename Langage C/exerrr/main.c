#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, temps;
    int taille = 4; //table initiale

    printf("saisir la taille du tableau: ");
    scanf("%d", &taille);

    const int SIZE = taille; //nouvelle taille
    int table [SIZE];

    //demander à l'utilisateur de remplir le tableau
    for (i=0; i<SIZE; i++){
        printf("saisir un nombre: ");
        scanf("%d", &table[i]);
    }

    printf("Avant triages: ");
    for(i=0; i<SIZE; i++){
        printf("%d", table[i]);
        if(i!=SIZE-1)
            printf(",");
        else
            printf("\n");
    }

    for(i=0; i<SIZE; i++){
        for(j=i+1; j<SIZE; j++){
            if(table [j]<table[i]){
                temps = table[i];
                table[i]=table[j];
                table[j]=temps;
            }
        }
    }

    printf("Apres triage: ");
    for(i=0; i!=SIZE; i++){
        printf("%d", table[i]);
        if(i!=SIZE-1){
            printf(",");
        }
    }
    return 0;
}
