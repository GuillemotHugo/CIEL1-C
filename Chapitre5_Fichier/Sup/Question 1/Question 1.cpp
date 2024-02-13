#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

/*
Ecrire un programme C permettant de créer un fichier qui contiendra l’alphabet
*/

int main() {
    FILE *fichier;
    fichier = fopen("alphabet.txt", "w");

    if (fichier == NULL) {
        printf("Erreur lors de l'ouverture du fichier.");
        return 1;
    }

    for (char lettre = 'A'; lettre <= 'Z'; lettre++) {
        fprintf(fichier, "%c ", lettre);
    }

    fclose(fichier);

    printf("Le fichier alphabet.txt est creer\n");

    return 0;
}
