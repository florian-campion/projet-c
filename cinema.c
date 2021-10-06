#include <stdio.h>
#include <cs50.h>


int main(void)
{
    int age = get_int("Quel est votre âge ?\n");
    string film [3][3] = {{"Mad Max","Saw","Conjuring"},
        {"l'arme fatale","Alien","John Wick"},
        {"Cars","Harry potter","Narnia"}};

    int n ;
    if(age < 11)
    {
         n = 2;
    }else if( age > 11 && age <17)
    {
         n = 1;
    } else
    {
        n = 0;
    }


    for(int i = n; i < 3 ; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("Voulez vous voir ce film : %s\n", film[i][j]);
            char answer = get_char("Pressez O pour oui ou N pour non \n");
            if(answer == 'O' || answer == 'o')
            {
                break;
            }
            /*if(j ==2 && i== 0)
            {
                char answers = get_char("Voulez-vous changez de categorie ?\n Pressez O pour oui ou N pour non \n");
                if(answers == 'O' || answers == 'o')
                {
                    char catg = get_char("Pressez A pour la categorie ados ou E pour la categorie enfant \n");
                    if(catg == 'A' || catg == 'a')
                    {
                        i = 1;
                    }else if (catg == 'E' || catg == 'e')
                    {
                        i = 2;
                    }
                }
            }*/

        }
        char answer = get_char("Etes-vous sur ?\n Pressez O pour oui ou N pour non \n");
            if(answer == 'O' || answer == 'o')
            {
                printf("Bon film!\n");
                break;

            }else
            {
                i--;
            }
    }

}