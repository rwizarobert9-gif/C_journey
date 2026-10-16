#include <stdio.h>
int main () {
    printf("Hello, World!");
    int passes = 0, fails = 0, student = 1;

    while (student <= 10) {
        printf("Enter result (1=pass, 2=fail): ");
        int result;
        scanf("%d", &result);

        if (result == 1) {
            passes++;     //passes=passes+1,passes += 1
        } else if (result == 2) {
            fails++;
           } else {
            printf("Invalid input. Please enter 1 for pass or 2 for fail.\n");
            continue; // Skip incrementing student count for invalid input
        }
          student++;
    }
    printf("Passed: %d\n", passes);
    printf("Failed: %d\n", fails);
    if (passes > 8) {
        printf("Bonus to instructor!\n");
    }

    unsigned int mark;
    unsigned int count = 1;
    unsigned int total = 0;

    printf("Enter marks (0 to end): ");
    scanf("%u", &mark);
    while (mark != 0) {
        total += mark;
        count++;
        printf("Enter marks (0 to end): ");
        scanf("%d", &mark);
    }
        printf("Average: %f\n", (double)total / (count - 1));
    return 0;  
}