#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

/*
Avec une application écrite en C, vous allez ouvrir le fichier « source.txt » en lecture, et
afficher son contenu caractère par caractère à l’écran à l’aide de la fonction getc.
Refermez ensuite le fichier.
*/

int main() {

    FILE* fichier;
    char ligne[100];

    fichier = fopen("source.txt", "r");

    if (fichier == NULL) {
        printf("Erreur lors de l'ouverture du fichier\n");
        return 1;
    }

    while (fgets(ligne, sizeof(ligne), fichier) != NULL) {
        printf("%s", ligne);
    }

    fclose(fichier);
}