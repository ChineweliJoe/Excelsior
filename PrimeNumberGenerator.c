/*Prime number generator function.
For nIndex passed, returns the nth prime number in the natural number sequence.
By ChineweliJoe*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int primeNoGenerator(int nIndex);

int main(){

    printf("%d", primeNoGenerator(10)); // Sample call with nIndex = 5. This call returns the 5th prime number.
}

int primeNoGenerator(int nIndex){


/* Sample prime number series: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97*/

    int currentPrimeNo = 2;     //1st prime number, with nIndex = 1 is 2. Therefore initial prime number = 2
    bool numIsPrime = true;

    if(nIndex >= 2){

        int i = 2;  //Begining from the 2nd prime number because the 1st is already 2.

           for(int j = 2; i <= nIndex; j++){             //j produces a continuous stream of natural numbers as long as i is less than nIndex, ie so long as we've not counted up to nIndex of prime numbers.

                int numSq = ceil(sqrt(j));               //Starting here, implemented algorithms tests if the current value of j is prime.
                for(int x = 2; x <= numSq; x++){
                    if(j % x == 0){
                        numIsPrime = false;
                        break;
                    }
                }
                    if(numIsPrime != false){
                        i++;                    //If j is checked and found prime, then it becomes the ith prime number. i is also incremented.
                        currentPrimeNo = j;
                    }
                    numIsPrime = true;
        }
    }
    return currentPrimeNo;
}
