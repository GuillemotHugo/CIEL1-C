////////////////////////
/// Chapitre 3 - TP2 ///
////////////////////////

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

/*
int multiple2(int nombre) { return (nombre % 2 == 0); }

int Multiple3(int nombre) { return (nombre % 3 == 0); }

int main() {
  int nombre;
  printf(
      "Entrez un nombre, je vais vous dire si il est multiple de 2,3 ou 6\n");
  scanf("%d", &nombre);

  if (multiple2(nombre)) {
    printf("%d est multiple de 2.\n", nombre);
  }

  if (multiple3(nombre)) {
    printf("%d est multiple de 3.\n", nombre);
  }

  if (multiple2(nombre) && multiple3(nombre)) {
    printf("%d est multiple de 6.\n", nombre);
  }

  else {
    printf("%d n'est pas multiple de 2,3 ou 6\n", nombre);
  }

  return 0;
}
*/

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

/*
void mintomaj(char *chaine, int *nbModifications) {
  *nbModifications = 0;

  for (int i = 0; chaine[i] != '\0'; i++) {
    if (islower(chaine[i])) {
      chaine[i] = toupper(chaine[i]);
      (*nbModifications)++;
    }
  }
}

int main() {
  char maChaine[100];
  int modifications = 0;

  printf("Entrez une chaine de caracteres : ");
  fgets(maChaine, sizeof(maChaine), stdin);
  mintomaj(maChaine, &modifications);

  printf("%s\n", maChaine);

  printf("lettres modifiees : %d\n", modifications);

  return 0;
}
*/

//////////////////
/// Question 4 ///
//////////////////

//

// Réponse

/*
#define Taillemax 20

void lire(int tab[], int *taille) {

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

void affiche(int tab[], int taille) {
  printf("Tableau trié : ");
  for (int i = 0; i < taille; i++) {
    printf("%d ", tab[i]);
  }
  printf("\n");
}

int indicemin(int tab[], int debut, int fin) {
  int indice_minimal = debut;

  for (int i = debut + 1; i <= fin; i++) {
    if (tab[i] < tab[indice_minimal]) {
      indice_minimal = i;
    }
  }

  return indice_minimal;
}

void trier(int tab[], int taille) {
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

  lire(tab, &taille);
  affiche(tab, taille);

  int indice_minimal = indicemin(tab, 0, taille - 1);
  printf("indice_min : %d\n", indice_minimal);

  trier(tab, taille);
  affiche(tab, taille);

  return 0;
}
*/

/////////////////////////
/// By Guillemot Hugo ///
/////////////////////////