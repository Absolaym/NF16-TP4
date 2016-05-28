#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tp4.h"

int main()
{
    int fin=0; //condition d'arrêt du main
    int choix=-1;
    //T_truc* truc=NULL;

    while (fin==0)
    {
        choix=-1;
        while(choix<0 || choix > 5)  //|| choix > 6)
        {
            printf("\n");
            printf("Menu du programme\n");
            printf("1: afficher le nom et le contenu du repertoire courant\n");
            printf("2: creer un sous-repertoire dans le repertoire courant\n");
            printf("3: aller dans un sous-repertoire\n");
            printf("4: retourner a la racine\n");
            printf("5: aller dans le repertoire pere\n");
            //printf("6 : supprimer un sous-répertoire\n");
            printf("0 : quitter le programme\n");

            printf("\nChoix ?\n ");
            scanf("%d", &choix);
            system("cls");
        }

        system("cls");
        emptyBuffer();

        switch (choix) {

             case 1: {
                printf("\nAfficher le nom et le contenu du repertoire courant\n");
                /*if...
                {
                   ...
                }
                else printf("...\n");*/
                break;
            }

            case 2: {
                printf("\nCreer un sous-repertoire dans le repertoire courant\n");
                /*if...
                {
                   ...
                }
                else printf("...\n");*/
                break;
            }

            case 3: {
                printf("\nAller dans un sous-repertoire\n");
                /*if...
                {
                   ...
                }
                else printf("...\n");*/
                break;
            }

            case 4: {
                printf("\nRetour a la racine\n");
                /*if...
                {
                   ...
                }
                else printf("...\n");*/
                break;
            }

            case 5: {
                printf("\nAller dans le repertoire pere\n");
                /*if...
                {
                   ...
                }
                else printf("...\n");*/
                break;
            }

            /*case 6: {
                printf("\nSupprimer un sous-repertoire\n");
                if...
                {
                   ...
                }
                else printf("...\n");
                break;
            }*/

            case 0: {
                printf("\nFin du programme\n");
                fin=1;
                //if(truc) free(truc);
                break;
            }

            default:
                printf("\nVeuillez entrer un choix valide\n");
                //break;
        }
    }
    return 0;
}
