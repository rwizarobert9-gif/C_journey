#include <stdio.h>

int main () {
    unsigned int y;
    int x = 8;
    printf("Enter value of y: ");
    scanf("%u",&y);
    printf("Sum is %d",y+x);

    int c;
    printf("\nEnter value of c: ");
    scanf("%d",&c);
    if (c <= 5) {
       int d = ++c;
        printf("\nvalue of c: %d",c);
        printf("\nValue of d is %d",d);

    }
    return 0;
}