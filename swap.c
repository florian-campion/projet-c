#include <stdio.h>

//on initalise la fonction swap
void swap(int *a, int *b);

int main(void)
{
    int x;
    int y;
    // on saisit les entiers x et y
    printf("x ?\n");
    scanf("%i", &x);
    printf("y ?\n");
    scanf("%i", &y);
    //on utilise la fonction pour echanger la valeur de x et y
    swap(&x, &y);
    printf("x est de %i\n y est de %i\n", x, y);


}

void swap(int *a, int *b)
{
    // on va utiliser une variable temporaire pour echanger les valeur de x et y
    int tmp = *a;
    *a = *b;
    *b = tmp;

}