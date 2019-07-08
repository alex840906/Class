#include <time.h>
#include "Class.h"
#include "GA_operator.h"
#include "GA_ARG.h"

int evaluation(vec_1D solution)
{
    int sum = 0;
    for (int i = 0; i < solutionSize; i++)
        sum += solution[i];
    
    return sum;
}

int main()
{
    srand(time(NULL));
    Chromosome *chromosomeList[10];

    for (int i = 0; i < chromosomeNum; i++)
        chromosomeList[i] = new Chromosome();

    //cout<<chromosomeList[8]->getSolution()[10];

    vec_1D tmp;
    tmp = chromosomeList[0]->getSolution();
    for(int i=0;i<solutionSize;i++)
        cout<<tmp[i];
    //cout<<chromosomeList[0]->getSolution()<<endl;


    /*Chromosome *chromosome = new Chromosome(solutionSize);
    cout<<size(chromosomeList)<<endl;*/

    /*int sum = 0;
    sum = evaluation(chromosomeList[0]->getSolution());
    chromosomeList[0]->setFitnessValue(sum);

    cout << chromosomeList[0]->getFitnessValue() << endl;

    chromosomeList[0]->setFitnessValue(chromosomeList[0]->getFitnessValue() + 1);

    cout << chromosomeList[0]->getFitnessValue() << endl;
    */

    system("pause");
}