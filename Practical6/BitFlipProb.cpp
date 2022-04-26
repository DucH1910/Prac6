#include "BitFlipProb.h"
#include <stdlib.h>
BitFlipProb::BitFlipProb(double pP){
    p=pP;
}
Individual BitFlipProb::mutate(Individual ind,int k){
    for(int i=0;i<ind.getLength();i++){
        double r=(rand()%100)/100.0;
        if(r<=p)
            ind.flipBit(i);
    }
    return ind;
}