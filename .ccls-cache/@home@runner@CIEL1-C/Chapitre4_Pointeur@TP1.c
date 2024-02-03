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

/*
int main() {

  float adr1 = -45.78;
  float adr2 = -638.89;

  float *padr1 = &adr1;
  float *padr2 = &adr2;

  printf("a = %f et l'adresse de a est : %p.\n", adr1, padr1);
  printf("b = %f et l'adresse de b est : %p.\n", adr2, padr2);

  return 0;
}
*/

//////////////////
/// Question 2 ///
//////////////////

// Soit adr_deb un pointeur sur entiers, vous ferez en sorte que adr_deb pointe sur un emplacement mémoire suffisant afin de stocker 6 entiers donnés par l’utilisateur. Puis vous rangerez ces valeurs dans l’ordre croissant. Rechercher le maximum, l'afficher ainsi que son adresse et sa position.

// Réponse

/*
void trie(int tab[]) {
  int i, j, tmp;
  for (i = 0; i < 6; i++) {
    for (j = i + 1; j < 6; j++) {
      if (tab[i] > tab[j]) {
        tmp = tab[i];
        tab[i] = tab[j];
        tab[j] = tmp;
      }
    }
  }
}

int maximum(int tab[]) {
  int max = tab[0];
  for (int i = 0; i < 6; i++)   {
    if (tab[i] > max) {
      max = tab[i];
    }  
  }
  return max;
}

void affiche(int tab[]) {
    for (int i = 0; i < 6; i++) {
        printf("%d : %d son adresse est %p\n", i, tab[i], &tab[i]);
    }
}
  
int main() {

  int tab[6];
  int *adr_deb = tab;

  for (int i = 0; i < 6; i++) {
    scanf("%d", &tab[i]);
  }

  trie(tab);
  printf("Voici le tableau ranger :\n");
  affiche(tab);

  printf("Le maximum est %d et son adresse est %p\n", maximum(tab), &maximum);
  
  printf("Fin");
}
*/

//////////////////
/// Question 3 ///
//////////////////

// Soit une variable de type char * , écrire un programme qui saisit une chaîne de caractères et qui la stocke dans cette variable, puis qui affiche les éléments de la chaîne caractère par caractère avec leur adresse .

// Réponse

/*
int main() {
  char chaine[100];
  char *adr_chaine = chaine;

  fgets(chaine, 100, stdin);

  for (int i = 0; i < strlen(chaine) -1 ; i++) {
    printf("%d : '%c' son adresse est %p\n", i, chaine[i], &chaine[i]);
  }
  
  return 0;
}
*/

//////////////////
/// Question 4 ///
//////////////////

/*
tab1 et tab2 sont des variables locales à main:
int tab1[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
int tab2[] = {-19,18,-17,16,-15,14,-13,12,-11,10,-9,8,-7,6,-5,4,-3,2,-1,0};
Ecrire une fonction de prototype void affiche(int *tab,int i,int j) qui
permet d'afficher les i*j nombres suivant un tableau i x j(à l’affichage i
lignes et j colonnes). La mettre en oeuvre dans main() pour afficher tab1 et
tab2.
*/

// Réponse


//////////////////
/// Question 5 ///
//////////////////

// Calculer et afficher les racines de ax2+bx+c=0. Une fonction de prototype void saisie(float *aa,float *bb,float *cc) permet de saisir a,b,c. Une fonction de prototype float *calcul(float aa,float bb,float cc) exécute les calculs et renvoie les résultats. a, b, c sont des variables locales à main(); main() se contente de saisir a,b et c puis d'appeler saisie et calcul et d’afficher les solutions.


// Réponse

/*
void saisie(float *aa,float *bb,float *cc) {
  printf("Saisir a, b, c\n");
  scanf("%f %f %f", aa, bb, cc);
}

float *calcul(float aa,float bb,float cc) {
  int delta= pow(bb,2)-4*aa*cc;
  
  if (delta<0) {
    printf("Il n'y a pas de solution");
  } else if (delta==0) {
    printf("Il y a une solution\n");
    float x1=-bb/2*aa;
    printf("x1 = %f",x1);
  } else {
    printf("il y a 2 solutios\n");
    float x1=(-bb+sqrt(delta))/2*aa;
    float x2=(-bb-sqrt(delta))/2*aa;
    printf("x1 = %f\n",x1);
    printf("x2 = %f\n",x2);
  }  
}

int main() {
  float a, b, c;
  saisie(&a,&b,&c);
  calcul(a,b,c);
}
*/

/////////////////////////
/// By Guillemot Hugo ///
/////////////////////////
