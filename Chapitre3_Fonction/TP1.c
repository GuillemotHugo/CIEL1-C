////////////////////////
/// Chapitre 3 - TP1 ///
////////////////////////

// Pour éxécuter un des programme, il faudra remplacer le nom de la fonction par
// "main"
// Les fonctions "ch3tp1questionN" remplace les "main".

#include <ctype.h>
#include <stdio.h>
#include <string.h>

//////////////////
/// Question 1 ///
//////////////////

// Ecrire une fonction de prototype int puissance(int a, int b) qui calcule, a
// puissance b, a et b étant des entiers et qui renvoie le résultat au programme
// appelant. Dans main(), demandez à l’utilisateur d’entrer 2 valeurs x et y,
// puis grâce à la fonction puissance vous calculerez xpuissy et vous afficherez
// le résultat obtenu .

// Réponse

int puissance1(int x, int y) {
  int resultat = pow(x, y);
  return resultat;
}

int ch3tp1question1() {
  int x, y;
  printf("Entrez les valeurs suivante : x serra l'exposé et y l'exposant\n");
  printf("Entrez la valeur de x\n");
  scanf("%d", &x);
  printf("Entrez la valeur de y\n");
  scanf("%d", &y);
  printf("le résultat est %d", puissance1(x, y));
}

//////////////////
/// Question 2 ///
//////////////////

// Un programme contient la déclaration suivante : Int
// tab[10]={1,2,4,8,16,32,64,128,256,512} ; Ecrire une fonction de prototype
// void affiche (int *t) qui affiche les éléments du tableau, et leur position ;
// la mettre en œuvre dans main().

// Réponse

void affiche2(int *t) {
  for (int i = 0; i < 10; i++) {
    printf("La position %d du tableau a pour valeur %d\n", i, t[i]);
  }
}

int ch3tp1quesion2() {
  int tab[10] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
  affiche2(tab);
}

//////////////////
/// Question 3 ///
//////////////////

// Un programme contient la déclaration suivante : Float
// liste[8]={1.6,-6.9,9.67,5.90,345,-23.6,78,34.6} ; Ecrire une fonction de
// prototype float min (float* tab) qui renvoie le minimum de la liste. Ecrire
// une fonction de prototype float max (float *tab) qui renvoie le maximum de la
// liste. Les mettre en œuvre dans main().

// Réponse

float min3(float *tab) {
  float vmin = tab[0];
  for (int i = 0; i < 8; i++) {
    if (tab[i] < vmin) {
      vmin = tab[i];
    }
  }
  return vmin;
}

float max3(float *tab) {
  int vmax = tab[0];
  for (int i = 0; i < 8; i++) {
    if (tab[i] > vmax) {
      vmax = tab[i];
    }
  }
  return vmax;
}

int ch3tp1question3() {
  float tab[8] = {1.6, -6.9, 9.67, 5.90, 345, -23.6, 78, 34.6};
  printf("Le minimum est %f\n", min3(tab));
  printf("Le maximum est %f\n", max3(tab));
}

//////////////////
/// Question 4 ///
//////////////////

// Ecrire une fonction qui calcule le pgcd de deux nombres initialisés dans le
// programme principal par l’utilisateur. La mettre en œuvre dans main().

// Réponse

int fonction4(int v1, int v2) {
  while (v2 != 0) {
    int mémoire = v2;
    v2 = v1 % v2;
    v1 = mémoire;
  }
  return v1;
}

int ch3tp1question4() {
  int v1, v2;
  printf("Entrez 2 valeurs, nous allons calculer leurs diviseur commun le plus "
         "grand\n");
  scanf("%d", &v1);
  scanf("%d", &v2);
  int pgcd = fonction4(v1, v2);

  printf("Le PGCD de %d et %d est %d\n", v1, v2, pgcd);

  return 0;
}

//////////////////
/// Question 5 ///
//////////////////

// Ecrire une fonction qui calcule n ! c'est-à-dire : n !=
// n*(n-1)*(n-2)*...3*2*1. avec n>=0 et 0 !=1 Avec n unsigned int passé en
// paramètre et initialisé dans le programme principal par l’utilisateur.

// Réponse

unsigned int fractionelle5(unsigned int n) {
  if (n == 0) {
    return 1;
  }
  unsigned int resultat = 1;
  for (unsigned int i = 1; i <= n; i++) {
    resultat *= i;
  }
  return resultat;
}

int ch2tp1quesion5() {
  unsigned int n;
  printf("Entrez un nombre, nous allons calculer sa factorielle\n");
  scanf("%u", &n);
  printf("Le résultat est %u\n", fractionelle5(n));

  return 0;
}

//////////////////
/// Question 6 ///
//////////////////

// Ecrire une fonction de prototype « void inverse(char *ch) » qui permette de
// convertir un texte, c’est à dire qui inverse le contenu d’une chaine de
// caractères. la mettre en œuvre dans main(). Ex : il fait beau va donner uaeb
// tiaf li

// Réponse

int inverserchaine(char *chaine) {
  int e = 0;
  char chaineinverser[9999];
  for (int i = strlen(chaine) - 2; i >= 0; i--) {
    chaineinverser[e] = chaine[i];
    e++;
  }
  return chaineinverser;
}

int ch3tp1question6() {
  char chaine[99999];
  printf("Entrez une chaine de caractère\n");
  fgets(chaine, sizeof(chaine), stdin);
  printf("voici le texte inversé : %s", inverserchaine(chaine));
}

//////////////////////////
/// By Guillemot Hugo ///
/////////////////////////