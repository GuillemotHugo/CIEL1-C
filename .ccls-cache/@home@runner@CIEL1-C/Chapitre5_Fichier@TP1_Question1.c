#include <stdio.h>

int main() {
  
    FILE *fichier;
    char fichier1[] = "source.txt";
    fichier = fopen(fichier1, "r");
    sleep(10);
    fclose(fichier);
    return 0;
}
