////////////////////////
/// Chapitre 3 - TP2 ///
////////////////////////

// Pour éxécuter un des programme, il faudra remplacer le nom de la fonction par
// "main"
// Les fonctions "ch3tp2questionN" remplace les "main".

#include <ctype.h>
#include <stdio.h>
#include <string.h>

//////////////////
/// Question 1 ///
//////////////////

// Ecrire deux fonctions qui retourne une valeur entière permettant de savoir si
// l’entier passé en argument est multiple de deux et multiple de trois pour la
// seconde fonction. Utiliser ces deux fonctions dans un petit programme qui lit
// un nombre entier et qui précise s’il est pair, multiple de 3 et/ou multiple
// de 6.

// Réponse

int Multiple2_1(int nombre) { return (nombre % 2 == 0); }

int Multiple3_1(int nombre) { return (nombre % 3 == 0); }

int ch3tp2question1() {
  int nombre;
  printf(
      "Entrez un nombre, je vais vous dire si il est multiple de 2,3 ou 6\n");
  scanf("%d", &nombre);

  if (Multiple2_1(nombre)) {
    printf("%d est multiple de 2.\n", nombre);
  }

  if (Multiple3_1(nombre)) {
    printf("%d est multiple de 3.\n", nombre);
  }

  if (Multiple2_1(nombre) && Multiple3_1(nombre)) {
    printf("%d est multiple de 6.\n", nombre);
  }

  else {
    printf("%d n'est pas multiple de 2,3 ou 6\n", nombre);
  }

  return 0;
}

//////////////////
/// Question 2 ///
//////////////////

//

// Réponse

//////////////////
/// Question 3 ///
//////////////////

//

// Réponse

void transforme3(char *chaine, int *nbModifications) {
  *nbModifications = 0;

  for (int i = 0; chaine[i] != '\0'; i++) {
    if (islower(chaine[i])) {
      chaine[i] = toupper(chaine[i]);
      (*nbModifications)++;
    }
  }
}

int ch3tp2question3() {
  char maChaine[100];
  int modifications = 0;

  printf("Entrez une chaine de caracteres : ");
  fgets(maChaine, sizeof(maChaine), stdin);
  transforme3(maChaine, &modifications);

  printf("%s\n", maChaine);

  printf("lettres modifiees : %d\n", modifications);

  return 0;
}

//////////////////
/// Question 4 ///
//////////////////

//

// Réponse

#include <stdio.h>

#define Taillemax 20

void lire4(int tab[], int *taille) {

  *taille = 0;
  int valeur;

  while (*taille < Taillemax) {
    printf("Valeur %d : ", *taille + 1);
    scanf("%d", &valeur);

    if (valeur == -1) {
      break;
    }

    tab[*taille] = valeur;
    (*taille)++;
  }
}

void affiche4(int tab[], int taille) {
  printf("Tableau trié : ");
  for (int i = 0; i < taille; i++) {
    printf("%d ", tab[i]);
  }
  printf("\n");
}

int indice_min4(int tab[], int debut, int fin) {
  int indice_minimal = debut;

  for (int i = debut + 1; i <= fin; i++) {
    if (tab[i] < tab[indice_minimal]) {
      indice_minimal = i;
    }
  }

  return indice_minimal;
}

void trier4(int tab[], int taille) {
  for (int i = 0; i < taille - 1; i++) {
    for (int j = 0; j < taille - i - 1; j++) {
      if (tab[j] > tab[j + 1]) {
        int mémoire = tab[j];
        tab[j] = tab[j + 1];
        tab[j + 1] = mémoire;
      }
    }
  }
}

int main() {
  int tab[Taillemax];
  int taille;

  lire4(tab, &taille);
  affiche4(tab, taille);

  int indice_minimal = indice_min4(tab, 0, taille - 1);
  printf("indice_min : %d\n", indice_minimal);

  trier4(tab, taille);
  affiche4(tab, taille);

  return 0;
}

/////////////////////////
/// By Guillemot Hugo ///
/////////////////////////