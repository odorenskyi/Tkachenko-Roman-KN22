#ifndef MODULESTKACHENKO_H_INCLUDED
#define MODULESTKACHENKO_H_INCLUDED

float s_calculation(float x, float y, float z);
struct population_flow{
int population;
int flow;
};
population_flow changes(int population, int death,int birth, int emigration, int imigration);
short int bal_boforta(float wind[24]);
short int binary_func(unsigned int num);

#endif // MODULESTKACHENKO_H_INCLUDED
