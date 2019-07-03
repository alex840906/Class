#ifndef Class_h
#define Class_h

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

typedef vector<vector<int>> vec_1D;
typedef vector<vector<int>> vec_2D;
class Chromosome{
    void Init_Chromosome(Chromosome);
    public:
        vec_1D solution;
        float fitnessValue; 
};

#endif 