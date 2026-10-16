#include <stdio.h>

int m5 (int x) {
    return  x*5;
}

int maxi(int x, int y, int z) {
    int max = x;
    if(y>max){
        max=y;
    }
    if(z>max){
        max=z;
    }
    return max;
}

int main () {
    for (int r = 1; r <= 5; ++r){
        printf("%d\n",m5(r));
    }
    printf("the highest number (100, 256, 89) is %d",maxi(100,256,89));
    return 0;
}