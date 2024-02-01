////////////////////////
/// Chapitre 4 - TD1 ///
////////////////////////

/// Pour éxécuter un des programme, il faudra remplacer le nom de la fonction
/// par "main"
// Les fonctions "ch4td1questionN" remplace les "main".

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

//

// Réponse

//////////////////
/// Question 3 ///
//////////////////

//Ecrire une fonction de prototype void saisie(int *val,int *nb) qui permet de faire la saisie d’entiers différents de 0(au maximum 20) et de les stocker où pointe val. La dernière valeur entrée devra être 0. Le paramètre nb permet de stocker le nombre de valeurs qui ont été entrées. Vous définirez une fonction affiche qui permet d’afficher les nb valeurs lues dans la fonction saisie. Ecrire un programme qui appelle saisie, qui appelle ensuite affiche puis écrit à l’écran le nombre de valeurs qui ont été entrées par l’utilisateur.

// Réponse

void saisie3(int *val, int *nb) {
    int i = 0;
    do {
        scanf("%d", val);
        val++;
        i++;
    } while (*(val - 1) != 0 && i <= 20);

    *nb = i - 1;
}

void affiche3(int *val, int nb) {
    for (int i = 0; i < nb; i++) {
        printf("%d\n", *val);
        val++;
    }
}

int main() {
    int valeurs[20];
    int nombreDeValeurs;


    saisie3(valeurs, &nombreDeValeurs);

    int *pValeurs = valeurs;

    affiche3(pValeurs, nombreDeValeurs);

    printf("%d\n", nombreDeValeurs);

    return 0;
}

/////////////////////////
/// By Guillemot Hugo ///
/////////////////////////