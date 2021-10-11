#include <stdio.h>

int main(void)
{
    int x;
    int y;
    // on saisit x
    printf("x ?\n");
    scanf("%i", &x);
    //on saisit y
    printf("y ?\n");
    scanf("%i", &y);
    //on calcule le produit de x et y et on l'affiche
    int prod = x * y;
    printf("le produit est de  %i\n", prod);
}