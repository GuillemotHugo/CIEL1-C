//////////////////////////
/// Chapitre 3 - Cours ///
//////////////////////////

#include <ctype.h>
#include <stdio.h>
#include <string.h>

//////////////////
/// Exercice 1 ///
//////////////////

// Ecrire une fonction qui calcule la valeur absolue d’un entier. Cette fonction
// sera appelée dans un programme qui affichera ensuite le résultat.

// Réponse

/*

int valeur_absolue(int valeur) {
  if (valeur < 0) {
    valeur = valeur * -1;
  }
}
int main() {

  int valeur;

  printf("Entrez une valeur\n");
  scanf("%d", &valeur);

  printf("La valeur absolue de votre nombre est %d\n", valeur_absoulue(valeur));

  return 0;
}
*/

//////////////////
/// Exercice 2 ///
//////////////////

// Ecrire une fonction qui calcule x puiss y. Cette fonction sera appelée dans
// un programme qui affichera ensuite le résultat.

// Réponse


/*
int puissance(x,y) {
  int result = pow(x, y);
  return result;
}

int main() {

  int x, y;

  printf("Entrez la valeur de x\n");
  scanf("%d", &x);
  printf("Entrez la valeur de y\n");
  scanf("%d", &y);

  printf("Le resultat de %d à la puissance %d est %d\n", x, y,puissance(x,y));

  return 0;
}
*/

/////////////////////////
/// By Guillemot Hugo ///
/////////////////////////