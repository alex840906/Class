#include "Class.h"

void selection()
{
}

void crossover(vec_1D &solution_1, vec_1D &solution_2)
{
    float probabilityToCrossover = (double)rand() / (RAND_MAX);
    if (probabilityToCrossover < crossoverRate)
    {
        int cuttingPoint_1, cuttingPoint_2;
        cuttingPoint_1 = rand() / 100;
        cuttingPoint_2 = rand() / 100;

        if (cuttingPoint_1 < cuttingPoint_2)
        {
            for (int i = cuttingPoint_1; i <= cuttingPoint_2; i++)
                swap(solution_1[i], solution_2[i]);
        }
        else
        {
            for (int i = cuttingPoint_2; i <= cuttingPoint_1; i++)
                swap(solution_1[i], solution_2[i]);
        }
    }
}
