#include <stdio.h>
#include <math.h>

int main(void)
{
    int x;
    int y;
    printf("Quel est la longueur du coté AC ?\n");
    scanf("%i", &x);
    printf("Quel est la longueur du coté BC ?\n");
    scanf("%i", &y);
    double hypo = sqrt((x * x) + (y * y));
    printf("la longueur de l'hypothénuse est de %.1f\n", hypo);
}