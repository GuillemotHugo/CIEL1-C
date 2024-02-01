////////////////////////
/// Chapitre 4 - TP1 ///
////////////////////////

// Pour éxécuter un des programme, il faudra remplacer le nom de la fonction par
// "main"
// Les fonctions "ch4tp1questionN" remplace les "main".

#include <ctype.h>
#include <stdio.h>
#include <string.h>

//////////////////
/// Question 1 ///
//////////////////

// adr1 et adr2 sont des pointeurs pointant sur des réels. Le contenu de où
// pointe adr1 vaut -45,78; le contenu de où pointe adr2 vaut 678,89. Ecrire un
// programme qui ne contient que deux variables(adr1 et adr2) de type pointeurs
// sur réél, qui stocke deux valeurs réelles (-45.78 et 678.89) et qui affiche
// les adresses des espaces mémoires qui stockent les deux rééls ainsi que le
// contenu de ces deux espaces.

// Réponse

int ch4tp1question1() {

  float adr1 = -45.78;
  float adr2 = -638.89;

  float *padr1 = &adr1;
  float *padr2 = &adr2;

  printf("a = %f et l'adresse de a est : %p.\n", adr1, padr1);
  printf("b = %f et l'adresse de b est : %p.\n", adr2, padr2);

  return 0;
}

//////////////////
/// Question 2 ///
//////////////////

// Soit adr_deb un pointeur sur entiers, vous ferez en sorte que adr_deb pointe
// sur un emplacement mémoire suffisant afin de stocker 6 entiers donnés par
// l’utilisateur. Puis vous rangerez ces valeurs dans l’ordre croissant.
// Rechercher le maximum, l'afficher ainsi que son adresse et sa position.

// Réponse

int trie2(tab6) {}

int main() {

  int tab[6];
  int *ptab = tab;

  for (int i = 0; i < 6; i++) {
    scanf("%d", tab[i]);
  }
}

//////////////////
/// Question 3 ///
//////////////////

// Soit une variable de type char * , écrire un programme qui saisit une chaîne
// de caractères et qui la stocke dans cette variable, puis qui affiche les
// éléments de la chaîne caractère par caractère avec leur adresse .

// Réponse

int ch4tp1question3() {}

//////////////////
/// Question 4 ///
//////////////////

// tab1 et tab2 sont des variables locales à main:
// int tab1[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
// int tab2[] = {-19,18,-17,16,-15,14,-13,12,-11,10,-9,8,-7,6,-5,4,-3,2,-1,0};
// Ecrire une fonction de prototype void affiche(int *tab,int i,int j) qui
// permet d'afficher les i*j nombres suivant un tableau i x j(à l’affichage i
// lignes et j colonnes). La mettre en oeuvre dans main() pour afficher tab1 et
// tab2.

// Réponse

int ch4tp1question4() {}

//////////////////
/// Question 5 ///
//////////////////

// Calculer et afficher les racines de ax2+bx+c=0. Une fonction de prototype
// void saisie(float *aa,float *bb,float *cc) permet de saisir a,b,c. Une
// fonction de prototype float *calcul(float aa,float bb,float cc) exécute les
// calculs et renvoie les résultats. a, b, c sont des variables locales à
// main(); main() se contente de saisir a,b et c puis d'appeler saisie et calcul
// et d’afficher les solutions.

// Réponse

int ch4tp1question5() {}

/////////////////////////
/// By Guillemot Hugo ///
/////////////////////////
