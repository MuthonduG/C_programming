#include <stdio.h>

// Practice query: Write a C program to accept two integers and check whether they are equal or not.

void useIfConditional(int num);
void useDoWhileConditional(int num);
void useWhileConditional(int num);

int main(void) {
    int num;

    printf("Enter an integer: \n");
    scanf("%d", &num);

    useIfConditional(num);
    useDoWhileConditional(num);
    useWhileConditional(num);

    return 0;
}

// Use if, else, and else if
void useIfConditional(int num) {
    int numOne = 15;

    if (num == numOne) {
        printf("%d is equal to %d \n", num, numOne);
    } else if (num > numOne) {
        printf("%d is greater than %d \n", num, numOne);
    } else {
        printf("%d is less than %d \n", num, numOne);
    }
}

// use while
void useWhileConditional(int num) {
    int numOne = 15;

    while (numOne != num) {
        printf("%d is not equal to %d\n", num, numOne);
       return; // Prevents an infinite number of loops
    }
}

// use do, while
void useDoWhileConditional(int num) {
    int numOne = 15;

    do {
        printf("%d is not equal to %d\n", num, numOne);
        return; // Prevents an infinite number of loops
    } while (numOne != num);
}
