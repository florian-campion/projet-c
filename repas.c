#include <stdio.h>
#include <cs50.h>

// l'objectif de ce programme est de donner des idées de repas lorsque l'on ne sait pas quoi se faire a manger

// on initialise la fonction
int testfichiervide(FILE *file);

int main(void)
{   
    //ouverture du fichier 
    FILE *file = fopen("ideerepas.csv", "a+");
    //verification qu'on a bien un fichier
    if (!file)
    {
        return 1;
    }
    char repas[50];
    //on va tester si le fichier est vide et si il est pas vide on afficche le contenu du fichier
    if (testfichiervide(file) == 1)
    {
        printf("Votre liste est vide\n");
    }
    else
    {
        printf("Voici votre liste de repas :\n");
        while (fgets(repas, 50, file) != NULL) // On lit le fichier tant qu'on ne reçoit pas d'erreur (NULL)
        {
            printf("%s", repas); // On affiche les repas qu'on vient de lire
        }
    }
    //on saisit le nombre de repas que l'on veut ajouter au fichhier
    int n = get_int("Combien de repas voulez-vous ajouter a votre liste de repas?\n");
    for (int i = 0; i < n ; i++)
    {
        printf("Quel repas voulez-vous ajouter ?\n");
        scanf("%s", repas);

        //on imprime le repas dans le fichier
        fprintf(file, "%s\n", repas);

    }
    //petite phrase de fin de programme
    printf("\nN'oubliez pas d'ajouter plus de repas pour avoir une liste de plus en plus complete!\n");
    //fermeture du fichier
    fclose(file);


}

int testfichiervide(FILE *file)
{   
    //on va utiliser fseek pour positioner le pointeur a tel emplacement du fichier, donc la au debut
    fseek(file, 0, SEEK_SET);
    //puis avec ftell on donne la valeur situe a cet emplacement du fichier
    if (ftell(file) == 0)
    {
        return 1;//le fichier est vide donc on retourne 1
    }
    return 0;//le fichier n'est pas vide donc on retourne 0
}