#include "Rearrange.h"
#include "Individual.h"
#include <string>
using namespace std;
Individual Rearrange::mutate(Individual ind,int k){
    string binaryString=ind.getString();
    string firstPart=binaryString.substr(0,k-1);
    string secondPart=binaryString.substr(k-1);
    string mutatedString=secondPart+firstPart;
    Individual mutatedIndividual(mutatedString);
    return mutatedIndividual;
}