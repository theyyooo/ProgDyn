#include "dichotomie.h"

/**
 * Recherche par dichotomie dans un tableau d'entiers
 * @param array The array of values
 * @param size_t The size of the array
 * @param value The value to find
 * @return The position of the value found or -1
 */
int find_by_dichotomy(int array[], int size_t, int value ){
    int index_min = 0;
    int index_max = size_t;

    while (index_min <= index_max)
    {
        int index = (index_min + index_max) >> 1;
        if (array[index] == value)
        {
            return index;
        }       
        else if (array[index] > value)
        {
            index_max = index - 1;
        }
        else
        {
            index_min = index + 1;
        }
    }
    int not_find = -1;
    return not_find;
}