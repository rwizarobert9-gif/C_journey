#include <stdio.h>

long int factorial (int num);

int main() {
    int num;
    printf("Enter Number;");
    scanf("%d",&num);
        printf("%d! is %ld\n",num, factorial(num));
    return 0;
}

long int factorial (int num){
    if (num <= 1){
        return 1;
    }
    else{
        return (num*(factorial(num-1)));
    }
}