#include <stdio.h>

int main () {
    unsigned int num;
    unsigned count;
    
    int largest;
    int largest2;

    while (count < 10) {
        printf("Enter number %d: ", count + 1);
        scanf("%u", &num);
        if (num > largest) {
            largest2 = largest;
            largest = num;
        }
        count++;
    }

    printf("Two Largest numbers are %d %d", largest, largest2);

    return 0;
}