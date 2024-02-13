#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

/*
Ecrire une fonction ayant un pointeur de fichier en argument (pointeur sur un fichier qui sera
déjà ouvert dans le programme principal) et qui retournera un entier. Cette fonction aura pour
but de calculer et de retourner la taille du fichier (en octets).
Essayez votre fonction avec les trois fichiers utilisés (source.txt, dest1.txt,dest2.txt).
La fermeture du fichier se fera dans le programme principal.
*/


long calculerTailleFichier(FILE* fichier) {
    long taille = 0;

    if (fseek(fichier, 0, SEEK_END) == 0) {
        taille = ftell(fichier);
        fseek(fichier, 0, SEEK_SET);
    }

    return taille;
}

int main() {
    FILE* source = fopen("source.txt", "r");
    FILE* dest1 = fopen("dest1.txt", "r");
    FILE* dest2 = fopen("dest2.txt", "r");

    if (source == NULL || dest1 == NULL || dest2 == NULL) {
        printf("Erreur lors de l'ouverture des fichiers.\n");
        return 1;
    }

    printf("Taille du fichier source.txt : %ld octets\n", calculerTailleFichier(source));
    printf("Taille du fichier dest1.txt : %ld octets\n", calculerTailleFichier(dest1));
    printf("Taille du fichier dest2.txt : %ld octets\n", calculerTailleFichier(dest2));

    fclose(source);
    fclose(dest1);
    fclose(dest2);

    return 0;
}