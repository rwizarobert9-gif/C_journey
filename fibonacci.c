#include <stdio.h>

long int fibonacci(int num);

int main () {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    printf("\nFibonacci(%d) = %ld",num,fibonacci(num));

    return 0;
}

long int fibonacci(int num) {
    if (num == 0 || num == 1){
        return num;
    }
    else{
        return (fibonacci(num-1)+fibonacci(num-2));
    }

}