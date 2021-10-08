#include <stdio.h>
#include <cs50.h>


int main(void)
{
    // on assigne l'age à une variable nommé age
    int age = get_int("Quel est votre âge ?\n");
    // on creer un tableau 2 dimensions avec les film de chaque categorie
    string film [3][3] = {{"Mad Max", "Saw", "Conjuring"},
        {"l'arme fatale", "Alien", "John Wick"},
        {"Cars", "Harry potter", "Narnia"}
    };

    int n ;
    //avec un if, else if et else on va déterminer l'age pour chaque categorie et changer la valeur de n en fonction 
    // pour qu'on arrive a la bonne categorie de film correspondant à l'age
    if (age < 11)
    {
        n = 2;
    }
    else if (age >= 11 && age < 17)
    {
        n = 1;
    }
    else
    {
        n = 0;
    }

    // double boucle , la 1ere pour la categorie de film et la 2eme pour énuméré le choix de film et proposé si on veut le regarder
    for (int i = n; i < 3 ; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Voulez vous voir ce film : %s\n", film[i][j]);
            //demande de confirmartion pour voir le film si oui on sort de la boucle 
            char answer = get_char("Pressez O pour oui ou N pour non \n");
            if (answer == 'O' || answer == 'o')
            {
                break;
            }
            
        }  
        //2eme verification pour le choix du film, si oui on sort de la boucle sinon on retourne dans la même categorie et on recommence
        char answer = get_char("Etes-vous sur ?\n Pressez O pour oui ou N pour non \n");
        if (answer == 'O' || answer == 'o')
        {
            printf("Bon film!\n");
            break;

        }
        else
        {
            i--;
        }
    }

}
