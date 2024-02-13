#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

/*
Ecrire un programme qui permet de lire dans un fichier des entiers et de les trier avant de les
enregistrer dans un autre fichier. Vous devez �crire les fonctions suivantes :
1. int lireDonnees(char * nomFichier, int * T) qui lit les donn�es dans le fichier nomm� nomFichier
des entiers, puis les stocke dans un tableau T. La valeur de retour est le nombre d�entiers qui ont �t�
lus (c�est-�-dire le nombre d��l�ments du tableau).
2. void afficherTableau(int * T, int nb) qui affiche le contenu du tableau T qui comprend nb �l�ments.
3. void triABulles(int * T, int nb) qui trie le tableau T de nb �l�ments avec la m�thode du tri � bulles et
qui retourne le tableau tri�.
4. void enregistrerDonnees(char * nomFichier, int * T, int nb) qui enregistre les nb valeurs du tableau
T dans le fichier nomm� nomFichier.
Pour tester vos fonctions, vous r�aliserez un programme principal. Vous choisirez le nom du fichier
pour la lecture des donn�es ainsi que celui pour l�enregistrement des valeurs (vous pouvez mettre
ces noms en dur dans votre code).
*/

int lireDonnees(char* nomFichier, int* T) {
    FILE* fichier = fopen(nomFichier, "r");
    if (fichier == NULL) {
        printf("Erreur lors de l'ouverture du fichier %s\n", nomFichier);
        exit(EXIT_FAILURE);
    }

    int nombreLu;
    int nbElements = 0;

    while (fscanf(fichier, "%d", &nombreLu) == 1) {
        T[nbElements++] = nombreLu;
    }

    fclose(fichier);
    return nbElements;
}

void afficherTableau(int* T, int nb) {
    for (int i = 0; i < nb; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");
}

void triABulles(int* T, int nb) {
    for (int i = 0; i < nb - 1; i++) {
        for (int j = 0; j < nb - i - 1; j++) {
            if (T[j] > T[j + 1]) {
                int temp = T[j];
                T[j] = T[j + 1];
                T[j + 1] = temp;
            }
        }
    }
}

void enregistrerDonnees(char* nomFichier, int* T, int nb) {
    FILE* fichier = fopen(nomFichier, "w");
    if (fichier == NULL) {
        printf("Erreur lors de l'ouverture du fichier %s\n", nomFichier);
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < nb; i++) {
        fprintf(fichier, "%d ", T[i]);
    }

    fclose(fichier);
}

int main() {
    char nomFichierLecture[] = "donnees.txt";
    char nomFichierEnregistrement[] = "DonneesTrier.txt";
    int tailleMax = 100; 
    int tableau[100];
    int nbElements;

    nbElements = lireDonnees(nomFichierLecture, tableau);

    printf("Donnees :\n");
    afficherTableau(tableau, nbElements);

    triABulles(tableau, nbElements);

    printf("Donnees trier :\n");
    afficherTableau(tableau, nbElements);

    enregistrerDonnees(nomFichierEnregistrement, tableau, nbElements);

    printf("Les donnees trier on ete enregistrer");

    return 0;
}
