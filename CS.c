#include <stdio.h>
#include <string.h>

int main() {
    char pr[100]; //product
    int qp;//sentinel value
    int qty;//quantity sold in a day
    int rp;//retail price
    int ps;//total sales for a single product in a day
    int total;//total sales made for all products
    printf("Retail Sales Calculator (-1 to close)");
    scanf("%d",&qp);
    while (qp != -1){
        printf("\nEnter product and quantity sold in a day(with space in between the two.):");
        scanf("%99s %d",pr,&qty);
        if (strcmp(pr, "Rice") == 0){
            rp = 2000;
        }
        else if (strcmp(pr, "Sugar") == 0){
            rp = 5000;
        }
        else if (strcmp(pr, "Soap") == 0){
            rp = 10000;
        }
        else{
                rp = 1000;   
        }
        ps = rp * qty;
        printf("Product sales for %s are %d",pr,ps);
        total += ps;
    printf("\nRetail Sales Calculator (-1 to close)");
    scanf("%d",&qp);
    }
    printf("Total Sales made are %d",total);
    return 0;
}