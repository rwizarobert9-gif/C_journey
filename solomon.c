#include <stdio.h>
int main(){
    for (int i=0; i<10; i++){
        for(int j=10; j>i; j--){
            printf("*");
        }
        printf("\n");
    }
return 0;
}