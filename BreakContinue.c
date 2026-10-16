#include <stdio.h>

int main () {
    int r;
    for(r=0; r <= 10; r++){
        if(r == 5){
            continue;
        }
        printf("%d\n",r);
    
    
    }
    return 0;
}