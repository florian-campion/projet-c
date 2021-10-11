#include <stdio.h>

int main(void)
{
    int x;
    int y;
    int z;
    // on saisit les entiers x, y et z
    printf("x ?\n");
    scanf("%i", &x);
    printf("y ?\n");
    scanf("%i", &y);
    printf("z ?\n");
    scanf("%i", &z);

    //On determine laquelle de ses variables et la plus grande
    if (x > y && x > z)
    {
        printf("x = %i est plus grand que y et z\n", x);
    }
    else if (y > x && y > z)
    {
        printf("y = %i est plus grand que x et z\n", y);
    }
    else if (z > x && z > y)
    {
        printf("z = %i est plus grand x et y\n", z);
    }
}