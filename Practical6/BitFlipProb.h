#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H
#include "Mutator.h"
#include "Individual.h"
class BitFlipProb:public Mutator{
    private:
        double p;
    public:
        BitFlipProb(double pP);
        Individual mutate(Individual ind,int k);
};
#endif