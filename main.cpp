#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"
#include <iostream>
#include <string>
using namespace std;
Individual * execute(Individual * indPtr, Mutator * mPtr, int k){
    Individual a=mPtr->mutate(*indPtr,k);
    return &a;
}
int main(int argc, char *argv[]){
    Individual * indPtr1=new Individual(argv[1]);
    Individual * indPtr2=new Individual(argv[3]);
    int k1=stoi(argv[2]);
    int k2=stoi(argv[4]);
    Mutator * bitFlipPtr= new BitFlip();
    Mutator * rearrangePtr= new Rearrange();
    cout<< execute(indPtr1,bitFlipPtr,k1)->getString();
    return 0;
}