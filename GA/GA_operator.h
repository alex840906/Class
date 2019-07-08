#include "Class.h"

void selection()
{
}

//erase index from vector
void vectorErase(int r1, int r2, vec_1D &targetVecotr)
{
    int valueToErase_1 = targetVecotr[r1];
    int valueToErase_2 = targetVecotr[r2];

    vec_1D::iterator it = targetVecotr.begin();

    for (; it != targetVecotr.end();)
    {
        if (*it == valueToErase_1 || *it == valueToErase_2)
            it = targetVecotr.erase(it);
        else
            ++it;
    }
}


void crossover(Chromosome** chromosomeList)
{
    vec_1D remainChromosome(chromosomeNum);
    for (int i = 0; i < chromosomeNum; i++)
        remainChromosome[i] = i;

    //初始化未crossover的chromosome

    for (int i = 0; i < (chromosomeNum / 2); i++)
    {
        int r_1 = rand() % (remainChromosome.size());
        int r_2 = rand() % (remainChromosome.size());
        while (r_2 == r_1)
            r_2 = rand() % (remainChromosome.size());

        float probabilityToCrossover = (double)rand() / (RAND_MAX);

        if (probabilityToCrossover < crossoverRate)
        {
            int cuttingPoint_1, cuttingPoint_2;
            cuttingPoint_1 = rand() / solutionSize;
            cuttingPoint_2 = rand() / solutionSize;

            if (cuttingPoint_1 < cuttingPoint_2)
            {
                for (int i = cuttingPoint_1; i <= cuttingPoint_2; i++)
                    swap(chromosomeList[r_1]->getSolution()[i], chromosomeList[r_2]->getSolution()[i]);
            }
            else
            {
                for (int i = cuttingPoint_2; i <= cuttingPoint_1; i++)
                    swap(chromosomeList[r_1]->getSolution()[i], chromosomeList[r_2]->getSolution()[i]);
            }
            //Erase index from vector
            vectorErase(r_1, r_2, remainChromosome);
        }

        else
            //Erase index from vector
            vectorErase(r_1, r_2, remainChromosome);
            
    }

}
