#include <stdio.h>
int main(){
 int number;
 while (1){
    printf("\ninput a number!!!!!\n");
    scanf("%d",&number);
    if (number < 0){
        if (number%2 != 0){
            printf("%d",number);
        }
        else if(number%2 == 0){
            printf("negative even");
            continue;
        }
    }
    if (number > 0){
        printf("positive value");
        break; 
    }
    

 }
}