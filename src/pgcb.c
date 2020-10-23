#include "pgcb.h"

int **create_matrice(int taille){
    int matrice[taille][taille];
    for (int i = 0; i < taille; i++)
    {
        for (int j = 0; j < taille; i++)
        {
            matrice[i][j] = 0;
        }
        
    }
    // distribution de 1 totalement rendom
    int nb_rand=rand()%taille+1;
    for (int k = 0; k < nb_rand; k++)
    {
         matrice[rand()%taille+0][rand()%taille+0] = 1;
    }
    
    return matrice;
}

void show_matrice(int **matrice, int taille){
    for (int i = 0; i < taille; i++){
        for (int j = 0; i < taille; j++){
            printf("%d   ", matrice[i][j]);
        }
    printf("\n");
    }     
}