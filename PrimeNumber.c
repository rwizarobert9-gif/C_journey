#include <stdio.h>

int isPrime(int n) { //function to check if a number is prime
    if (n < 2) // numbers less than 2 are not prime
    return 0; // 0 means false
    for (int i = 2; i * i <= n; i++) { // check for factors from 2 to sqrt(n)
        if (n % i == 0)  // if n is divisible by i, it is not prime
        return 0;
    }
    return 1; // 1 means true
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is a prime number\n", num);
    else
        printf("%d is not a prime number\n", num);

    return 0;
}