typedef struct {
    int valeur;
    float poids;
} Object;


void tri_object(Object *objets, int size);

Object *knapsack(Object *objets, int size, int bag);

