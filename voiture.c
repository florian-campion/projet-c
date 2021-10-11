#include <stdio.h>


int main(void)
{
    //ouvrir un fichier voiture.csv ou on va y ajouter le modele et la plaque de la voiture
    FILE *file = fopen("voiture.csv", "a");
    //
    if (!file)
    {
        return 1;
    }
    //on saisit le modele et la plaque
    char modele[20];
    char plaque[20];
    printf("Quel est le modele de la voiture ?\n");
    scanf("%s", modele);
    printf("Quel est la plaque d'immatriculation de la voiture\n");
    scanf("%s", plaque);

    //on imprime le modele et la plaque dans le fichier
    fprintf(file, "%s,%s\n", modele, plaque);
    //on ferme le fichier
    fclose(file);
}