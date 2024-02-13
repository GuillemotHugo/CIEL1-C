#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

/*
Ouvrir le fichier « source.txt » en lecture, et un fichier que vous nommerez « dest1.txt » en
écriture, puis copier chaque caractère du fichier source dans le fichier de destination.
Refermez le fichier.
*/

int main() {
    FILE* source, * dest;
    char ch;

    source = fopen("source.txt", "r");
    if (source == NULL) {
        perror("Erreur lors de l'ouverture du fichier source");
        return 1;
    }

    dest = fopen("dest1.txt", "w");
    if (dest == NULL) {
        perror("Erreur lors de l'ouverture du fichier destination");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }

    printf("Copie faites\n");

    fclose(source);
    fclose(dest);

    return 0;
}