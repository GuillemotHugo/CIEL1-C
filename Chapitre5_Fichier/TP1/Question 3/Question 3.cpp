#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

/*
Ouvrir le fichier « source.txt » en lecture, et un fichier que vous nommerez « dest2.txt » en
écriture, puis vous copier chaque caractère du fichier source dans le fichier de destination
mais sans copier la lettre ‘a’ dès que vous la trouverez dans le fichier source.
Refermez le fichier.
*/

int main() {
    FILE* source_file, * dest_file;
    char ch;

    source_file = fopen("source.txt", "r");
    if (source_file == NULL) {
        perror("Erreur lors de l'ouverture du fichier source");
        return 1;
    }

    dest_file = fopen("dest2.txt", "w");
    if (dest_file == NULL) {
        perror("Erreur lors de l'ouverture du fichier destination");
        fclose(source_file);
        return 1;
    }

    while ((ch = fgetc(source_file)) != EOF) {
        if (ch != 'a') {
            fputc(ch, dest_file);
        }
    }

    printf("Copie faite\n");

    fclose(source_file);
    fclose(dest_file);

    return 0;
}