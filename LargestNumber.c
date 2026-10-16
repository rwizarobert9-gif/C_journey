#include <stdio.h>

int main () {
    unsigned int num;
    unsigned count = 1;
    printf("Enter number: ");
    scanf("%d", &num);
    int largest = num;

    while (count < 10) {
        printf("Enter number %d: ", count + 1);
        scanf("%u", &num);
        if (num > largest) {
            largest = num;
        }
        count++;
    }

    printf("Largest number is %d", largest);

    return 0;
}