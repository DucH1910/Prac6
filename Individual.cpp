#include "Individual.h"
#include <string>
using namespace std;
Individual::Individual(int length){
    binaryString="";
    for (int i=0;i<length;i++){
        binaryString+="0";
    }
}
Individual::Individual(string pBinaryString){
    binaryString=pBinaryString;
}
string Individual::getString(){
    return binaryString;
}
int Individual::getBit(int pos){
    int length =(int) binaryString.length();
    if(pos>=length)
    //if(pos>=binaryString.length())
        return -1;
    else if (binaryString[pos]=='1')
        return 1;
    else
        return 0;
}
void Individual::flipBit(int pos){
    int length =(int) binaryString.length();
    if (pos<length){
        if(binaryString[pos]=='1')
            binaryString[pos]='0';
        else
            binaryString[pos]='1';
    }
}
int Individual::getMaxOnes(){
    int length =(int) binaryString.length();
    int a[binaryString.length()];
    for(int i=0;i<length;i++){
        if(binaryString[i]=='1'){
            if(i>=1)
                a[i]=a[i-1]+1;
            else
                a[i]=1;
        }
        else
            a[i]=0;
    }
    int max=0;
    for(int i=0;i<length;i++)
        if(a[i]>max)
            max=a[i];
    return max;
}
int Individual::getLength(){
    return binaryString.length();
}