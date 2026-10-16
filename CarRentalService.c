#include <stdio.h>

int main () {
    int car;
    int hours;
    int fee;
    printf("Enter car number and time in hours(with space in between)");
    scanf("%d %d",&car, &hours);
    while (car !=0){
    if (hours == 8){
         fee = 25000;    
    }
    else if (hours > 8){
        int p = hours - 8;
        fee = 25000 +(p*10000);
    }
    
    printf("%s\t %s\t %s\n","Car","Time","Fees");
    printf("%d\t %d\t %d\n",car,hours,fee);
    printf("Enter car number and time in hours(with space in between)");
    scanf("%d %d",&car, &hours);
}
    return 0;
}