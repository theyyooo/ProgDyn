#include "knapsack.h"

/**
 * @brief sort an object tab
 * 
 * @param objets_not_sorted of Object
 * @param size of the tab
 */
void tri_object(Object *objets_not_sorted, int size){

    int i, j, min;
    for (i = 0; i < size-1; i++)
    {
        min = i;
        
        for (j = i + 1; j < size; j++){
            if ( ( objets_not_sorted[j].valeur / objets_not_sorted[j].poids ) > ( objets_not_sorted[min].valeur / objets_not_sorted[min].poids )){
                min = j;
            }  
        } 

        //t[i] va échanger avec t[min]
        if (min != i){

            Object temp;
            
            temp=objets_not_sorted[i];
            objets_not_sorted[i]=objets_not_sorted[min];
            objets_not_sorted[min]=temp;
        }  
    }
}

/**
 * @brief garde que les objets qu'il peut garder dans le sac
 * 
 * @param objets tableau d'objets
 * @param size taille du tableau
 * @param bag taille du sac
 * @return Object* liste les objets utilisés
 */
Object *knapsack(Object *objets, int size, int bag){

    tri_object(objets, size);
    int contenance_total = 0;
    int i = 0;
    Object *results = malloc(30 * sizeof(Object));
    int cpt=0;
    for(int i = 0; i < size;i++){
        if (contenance_total + objets[i].poids <= bag)
        {           
            contenance_total += objets[i].poids;     
            results[cpt] = objets[i];    
            cpt ++;
        }
    } 
    return results;
}  
