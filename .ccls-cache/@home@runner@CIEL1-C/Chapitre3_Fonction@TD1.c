////////////////////////
/// Chapitre 3 - TD1 ///
////////////////////////

#include <ctype.h>
#include <stdio.h>
#include <string.h>

//////////////////
/// Exercice 1 ///
//////////////////

// Utilisation de variables locales.
// Quels résultats donne ce programme.

// Réponse

// avant d'appeler demo(), x=1 et y=2
// dans la fonction demo(), x=88 et y=99
// après voir appele demo(), x=1 et y=2

//////////////////
/// Exercice 2 ///
//////////////////

// 1.Ecrivez le prototype d’une fonction fait_le() qui a trois arguments de type
// char et qui renvoie une valeur de type float au programme appelant. 2.Ecrivez
// le prototype d’une fonction affiche() qui a un seul argument de type int et
// qui ne renvoie rien au programme appelant. 3.Quels type de valeur renvoient
// les fonctions suivantes et quels types d’arguments elles s’attendent à
// recevoir:
//                  a.int affiche_erreur(float err_nbr) ; b.long lit_enreg(int
//                  rec_nbr,int size) ;

// Réponse

// 1. float fait_le(char c1, char c2, char c3);
// 2. void affiche(int v1);
// 3. A. La fonction affiche_erreur retourne une valeur de type int et attends 1
// paramètres de type float.
//		B. La fonction lit_enreg retourne une valeur de type long et
//attends 2  paramètres de type int.

//////////////////
/// Exercice 3 ///
//////////////////

// 1. Ecrivez une fonction qui reçoit 2 réels en arguments et qui renvoie la
// valeur correspondant au produit de ces deux nombres. Dans le programme
// principal vous demanderez à l’utilisateur d’entrer deux valeurs que vous
// enverrez à la fonction décrite ci-dessus.

// 2. Ecrivez une fonction qui reçoit 2 entiers en arguments et qui divise le
// 1er par le 2nd si celui-ci est différent de 0 puis renvoie le résultat au
// programme appelant. Dans le programme principal vous demanderez à
// l’utilisateur d’entrer deux valeurs que vous enverrez à la fonction décrite
// ci-dessus.

// 3. Ecrivez une fonction qui appelle les fonctions 1 et 2 et qui affiche les
// différents résultats. Dans le programme principal vous demanderez à
// l’utilisateur d’entrer quatre valeurs que vous enverrez à la fonction décrite
// ci-dessus.

// 4. Ecrivez un programme qui utilise une fonction pour calculer la moyenne de
// 5 valeurs de type float, données par l’utilisateur dans le programme
// principal.

// 5. Ecrivez une fonction récurrente qui calcule le résultat de la valeur 3 à
// la puissance du nombre choisi par l’utilisateur. Par exemple si le nombre 4
// est tapé par l’utilisateur, le résultat sera 81.

// Réponse

// 1.

/*
float produit(float nombre1, float nombre2) {
  float resultat = nombre1 * nombre2;
  return resultat;
}

int main() {

  float nombre1;
  float nombre2;
  printf("Entrez un nombre\n");
  scanf("%f", &nombre1);
  printf("Entrez un autre nombre\n");
  scanf("%f", &nombre2);
  printf("Le produit des nombre que vous avez rentré est %f",
         produit(nombre1, nombre2));
  return 0;
}
*/

// 2.

/*
float divise(int nombre1, int nombre2) {
  float resultat = (float)nombre1 / nombre2;
  return resultat;
}

int ch3td1exercice3_2() {

  int nombre1;
  int nombre2;
  printf("Entrez un nombre\n");
  scanf("%d", &nombre1);
  printf("Entrez un autre nombre\n");
  scanf("%d", &nombre2);
  printf("la division des 2 nombre que vous avez entré est %f",
         divise(nombre1, nombre2));
  return 0;
}
*/

// 3.

/*
float produit(float p1, float p2) {
  float presultat = p1 * p2;
  return presultat;
}

float divise(int d1, int d2) {
  float dresultat = (float)d1 / d2;
  return dresultat;
}

int main() {

  float p1;
  float p2;
  int d1;
  int d2;

  printf("Entrez un autre nombre a multiplier\n");
  scanf("%f", &p1);
  printf("Entrez un autre nombre a multiplier\n");
  scanf("%f", &p2);
  printf("Entrez un autre nombre a diviser\n");
  scanf("%d", &d1);
  printf("Entrez un autre nombre qui divisera\n");
  scanf("%d", &d2);

  printf("le résultat de la multiplication est %f\n", prduit(p1, p2));
  printf("le résultat de la division est %f\n", divise(d1, d2));
}
*/

// 4.

/*
float moyenne(float v1, float v2, float v3, float v4, float v5) {
  return (v1 + v2 + v3 + v4 + v5) / 5.0;
}

int main() {
  float v1, v2, v3, v4, v5;
  printf("Entrez 5 nombres\n");
  scanf("%f", &v1);
  scanf("%f", &v2);
  scanf("%f", &v3);
  scanf("%f", &v4);
  scanf("%f", &v5);
  printf("la moyenne de ces 5 nombres est %f\n",
         moyenne(v1, v2, v3, v4, v5));
}
*/

// 5.

/*
int puissance3(int exposant) {
  int resultat = pow(3, exposant);
  return resultat;
}

int main() {
  int exposant;
  printf("entrez le nombre de la puissance\n");
  scanf("%d", &exposant);
  printf(" le résultat est %d", puissance3(exposant));
}
*/

/////////////////////////
/// By Guillemot Hugo ///
/////////////////////////