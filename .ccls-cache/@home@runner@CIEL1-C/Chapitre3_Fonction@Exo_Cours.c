//////////////////////////
/// Chapitre 3 - Cours ///
//////////////////////////

// Pour éxécuter un des programme, il faudra appeler la fonction voulue dans une
// fonction main. Les fonctions "ch3coursexerciceN" remplace les "main".

#include <ctype.h>
#include <stdio.h>
#include <string.h>

//////////////////
/// Exercice 1 ///
//////////////////

// Ecrire une fonction qui calcule la valeur absolue d’un entier. Cette fonction
// sera appelée dans un programme qui affichera ensuite le résultat.

// Réponse

int ch3coursexercice1() {

  int valeur;

  printf("Entrez une valeur\n");
  scanf("%d", &valeur);

  if (valeur < 0) {
    valeur = valeur * -1;
  }

  printf("La valeur absolue de votre nombre est %d\n", valeur);

  return 0;
}

//////////////////
/// Exercice 2 ///
//////////////////

// Ecrire une fonction qui calcule x puiss y. Cette fonction sera appelée dans
// un programme qui affichera ensuite le résultat.

// Réponse

int coursexercice2() {

  int x, y;

  printf("Entrez la valeur de x\n");
  scanf("%d", &x);
  printf("Entrez la valeur de y\n");
  scanf("%d", &y);

  int result = pow(x, y);

  printf("Le resultat de %d à la puissance %d est %d\n", x, y, result);

  return 0;
}

/////////////////////////
/// By Guillemot Hugo ///
/////////////////////////