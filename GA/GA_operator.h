#include "Class.h"

void selection()
{
}

void crossover(Chromosome &chromosomeList)
{
    float probabilityToCrossover = (double)rand() / (RAND_MAX);
    vec_1D remainChromosome(chromosomeNum);

    /*初始化未crossover的chromosome*/
    for (int i = 0; i < chromosomeNum; i++)
        remainChromosome[i] = i;

    for(int i = 0; i < (chromosomeNum / 2); i++)
    {
        
    }
    /*if (probabilityToCrossover < crossoverRate)
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
    }*/
}
