#include <stdio.h>

int main() {
    int num, i, isPrime = 1;
    //Input number from user
    printf("Enter the number: ");
    scanf("%d", &num);
    
    // check numbers less than 2
    if (num < 2) {
        isPrime = 0;
    }

            else {
                //Loop to check divisibility 
                for (i = 2; i < num; i++) {

                    //if divisible, not prime
                    if (num % i == 0) {
                        isPrime = 0;
                        break;
                    }
                }
            }

            //final result
            if (isPrime == 1) {
                printf("%d is a Prime Number. \n", num);
            }
            else {
                printf("%d is not a prime number. \n", num);
            }
            
            
            return 0;


    }
