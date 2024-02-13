#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

/*
Ecrire un programme C permettant d’afficher le contenu d’un fichier créé préalablement
*/

int main() {

    FILE* fichier;
    char ligne[100];

    fichier = fopen("LeFameuxFichierCreerAuPrealable.txt", "r");

    if (fichier == NULL) {
        printf("Erreur lors de l'ouverture du fichier\n");
        return 1;
    }

    while (fgets(ligne, sizeof(ligne), fichier) != NULL) {
        printf("%s", ligne);
    }

    fclose(fichier);
}