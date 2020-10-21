#include "pgcb.h"

int *create_matrice(){
    int matrice[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; i < 3; j++){
            printf("%d \n", matrice[i][j]);
        }
        printf("\n");     
    }
}