#ifndef Class_h
#define Class_h

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include "GA_ARG.h"

using namespace std;

typedef vector<int> vec_1D;
typedef vector<vector<int>> vec_2D;

class Chromosome{
    private:
        void initChromosome();
        vec_1D solution;
        float fitnessValue; 

    public:
        void setSolution(vec_1D solution);
        vec_1D getSolution();
        void setFitnessValue(float fitnessValue);
        float getFitnessValue();
        
        /*建構子&多載涵式*/
        Chromosome();
        Chromosome(int size);

};

Chromosome::Chromosome()
{
    solution.resize(solutionSize);
    for(int i=0; i<solutionSize; i++)
    {
        solution[i] = rand() % 2;
    }
} 

/*多載涵式*/
Chromosome::Chromosome(int size)
{
    solution.resize(size);
    for(int i=0; i<size; i++)
        solution[i] = rand() % 2;
}

void Chromosome::setSolution(vec_1D solution)
{
    this->solution = solution;
}

void Chromosome::setFitnessValue(float fitnessValue)
{
    this->fitnessValue = fitnessValue;
}

vec_1D Chromosome::getSolution()
{
    return solution;
}

float Chromosome::getFitnessValue()
{
    return fitnessValue;
}

#endif 