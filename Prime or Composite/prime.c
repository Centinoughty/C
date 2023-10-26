#include <stdio.h>

int prime (int number) {
    int prime = 1;
    int check = 2;
    while (prime != 0 && check <= number/2) {
        if (number % check != 0) {
            prime = 1;
        }
        else {
            prime = 0;
            break;
        }
        check ++;
    }
    return prime;
}

int main () {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("%d", prime(number));
    return 0;
}
