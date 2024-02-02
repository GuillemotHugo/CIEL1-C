////////////////////////
/// Chapitre 4 - TD1 ///
////////////////////////

#include <ctype.h>
#include <stdio.h>
#include <string.h>

//////////////////
/// Question 1 ///
//////////////////

//main()
 // {
// int A = 1;
// int B = 2;
// int C = 3;
// int *P1, *P2;
// P1=&A;
//P2=&C;
// *P1=(*P2)++;
//P1=P2;
//P2=&B;
//*P1-=*P2;
//++*P2;
//*P1*=*P2;
//A=++*P2**P1;
//P1=&A;
// *P2=*P1/=*P2;
// return 0;
// }

//Copiez le tableau suivant et complétez-le pour chaque instruction du programme ci-dessus

// Réponse

//              A  B  C  P1  P2
//Init.         1  2  3  /   /
//P1=&A         1  2  3  &A  /
//P2=&C         1  2  3  &A  &C
//*P1=(*P2)++   3  2  4  &A  &C
//P1=P2         3  2  4  &C  &C
//P2=&B         3  2  4  &C  &B   
//*P1-=*P2      3  2  2  &C  &B  
//++*P2         3  3  2  &C  &B
//*P1*=*P2      3  3  6  &C  &B
//A=++*P2**P1   24 4  6  &C  &B
//P1=&A         24 4  6  &A  &B
//*P2=*P1/=*P2  6  6  6  &A  &B


//////////////////
/// Question 2 ///
//////////////////

//Soit P un pointeur qui 'pointe' sur un tableau A:
//int A[] = {12, 23, 34, 45, 56, 67, 78, 89, 90}; int *P;
//P = A;
//Quelles valeurs ou adresses fournissent ces //expressions:
//a) *P+2
//b) *(P+2)
//c) &P+1
//d) &A[4]-3
//e) A+3
//f) &A[7]-P
//g) P+(*P-10)
//h) (P+(P+8)-A[7])

// Réponse

//a) *P+2 : Cela renvoie la valeur de la case pointée par P, puis on ajoute 2
//b) *(P+2) : Cela renvoie la valeur de la case pointée par P+2
//c) &P+1 : Cela renvoie l'adresse de P+1
//d) &A[4]-3 : Cela renvoie la valeur qui appartient a l'adresse de A[4] - 3 ( 54 - 3 = 51))
//e) A+3 : Cela ajoute 3 a la varible A 
//f) &A[7]-P : Cela donnera la valeur a l'adresse 7 du tableau A, puis soustraira l'adresse pointée par P.
//g) P+(*P-10) : Cela ajoutera la valeur à l'emplacement mémoire pointé par P moins 10 à la valeur de P.
//h) (P+(P+8)-A[7]) : Cela donnera la valeur à l'emplacement mémoire pointé par P plus la valeur à l'emplacement mémoire pointé par P+8 moins la valeur de A[7].

//////////////////
/// Question 3 ///
//////////////////

//Ecrire une fonction de prototype void saisie(int *val,int *nb) qui permet de faire la saisie d’entiers différents de 0(au maximum 20) et de les stocker où pointe val. La dernière valeur entrée devra être 0. Le paramètre nb permet de stocker le nombre de valeurs qui ont été entrées. Vous définirez une fonction affiche qui permet d’afficher les nb valeurs lues dans la fonction saisie. Ecrire un programme qui appelle saisie, qui appelle ensuite affiche puis écrit à l’écran le nombre de valeurs qui ont été entrées par l’utilisateur.

// Réponse

/*
void saisie(int *val, int *nb) {
    int i = 0;
    do {
        scanf("%d", val);
        val++;
        i++;
    } while (*(val - 1) != 0 && i <= 20);

    *nb = i - 1;
}

void affiche(int *val, int nb) {
    for (int i = 0; i < nb; i++) {
        printf("%d ,", *val);
        val++;
    }
}

int main() {
  
    int valeurs[20];
    int nombreDeValeurs;

    saisie(valeurs, &nombreDeValeurs);

    int *pValeurs = valeurs;
  
    printf("\n");
    printf("Voici les valeurs saisies :\n ");
  
    affiche(pValeurs, nombreDeValeurs);

    printf("vous avez saisie %d valeur", nombreDeValeurs);

    return 0;
}
*/

/////////////////////////
/// By Guillemot Hugo ///
/////////////////////////