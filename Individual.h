#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H
#include "Individual.h"
#include <string>
class Individual {
    private:
        std::string binaryString;
    public:
        Individual(int length);
        Individual(std::string pBinaryString);
        std::string getString();
        int getBit(int pos);
        void flipBit(int pos);
        int getMaxOnes();
        int getLength();
};
#endif