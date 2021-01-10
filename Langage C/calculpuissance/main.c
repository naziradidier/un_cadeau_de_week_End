#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A;
    int puissance;
    int resultat=1;
    printf("saisir un nombre: ");
    scanf("%d", &A);
    printf("saisir la puissance: ");
    scanf("%d", &puissance);

    int i;
    for( i=1 ; i<=puissance; i++ ) {
        resultat = A * resultat;
    }
    printf("la solution est: %d ", resultat);
    return 0;
}
