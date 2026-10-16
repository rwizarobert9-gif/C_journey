#include <stdio.h>

int main() {
    int a;
    int b;
    printf("Enter two numbers:");
    scanf("%d %d",&a, &b);
    int sum = a + b ;
    int diff = a - b;
    int product = a * b;
    printf("Sum is: %d",sum);
    int div = (double) a/b;
    printf("Division is %d",div);
    // \n  \t \a  %d %lf %f %c
       return 0;
}