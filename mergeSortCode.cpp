#include<iostream>
using namespace std;

void merge(int array[], int leftIndex, int midIndex, int rightIndex){
    int leftArraySize = midIndex - leftIndex + 1;
    int rightArraySize = rightIndex - midIndex;

    int leftArray[leftArraySize];
    int rightArray[rightArraySize];

    for(int i=0; i<leftArraySize; i++){
        leftArray[i] = array[leftIndex + i];
    }
    for(int j=0; j<rightArraySize; j++){
        rightArray[j] = array[midIndex + 1 + j];
    }

    
}
int main(){


    return 0;
}