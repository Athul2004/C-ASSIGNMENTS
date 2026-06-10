#include <stdio.h>

//Recursive function
int gcd(int a, int b) {


    //base condition
    if(b == 0) {
        return a;
    }

    //recursive call
    return gcd(b, a % b);

}

int main() {

    int num1, num2, result;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);


    //function call
    result = gcd(num1, num2);

    printf("GCD of %d and %d = %d\n", num1, num2, result);

    return 0;
}