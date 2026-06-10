#include <stdio.h>

//Function declaration
int isPerfect(int num);

int main() {

    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    //function call
    if(isPerfect(num)) {
        printf("%d is a perfect integer.\n", num);
    }

    else

    {
        printf("%d is Not a perfect number.\n",num);

    }

    return 0;

}

// Function definition
int isPerfect(int num) {

    int i, sum = 0;

    // Find proper divisors
    for(i = 1; i < num; i++) {

        if(num % i == 0) {
            sum = sum + i;
        }
    }

    //Check perfect number
    if(sum == num) {
        return 1;
    }
    else {
        return 0;
    }

}
