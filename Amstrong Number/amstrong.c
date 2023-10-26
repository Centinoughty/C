#include <stdio.h>

int power(int x, int y) {
    int result = 1;
    for (int i = 0; i < y; i ++) {
        result *= x;
    }
    return result;
}

int armstrongCheck(int number) {
    int count = 0;
    int sum = 0;
    int num = number;
    int copy = number;

    while (num > 0) {
        num /= 10;
        count ++;
    }

    while (copy > 0) {
        sum += power(copy%10, count);
        copy /= 10;
    }

    if (sum == number) {
        return 1;
    }
    else {
        return 0;
    }
}

int main () {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("%d", armstrongCheck(number));
    return 0;
}
