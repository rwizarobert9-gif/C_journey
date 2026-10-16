#include <stdio.h>

int main() {
    int pr; //product
    int qp;//sentinel value
    int qty;//quantity sold in a day
    int rp;//retail price
    int ps;//total sales for a single product in a day
    int total;//total sales made for all products
    printf("Retail Sales Calculator (-1 to close)");
    scanf("%d",&qp);
    while (qp != -1){
        printf("\nEnter product and quantity sold in a day(with space in between the two.):");
        scanf("%d %d",&pr,&qty);
        switch (pr){
            case 1:
                rp = 2000;
                break;
            case 2:
                rp = 5000;
                break;
            case 3:
                rp = 10000;
                break;
            default:
                rp = 1000;
                break;
        }
        ps = rp * qty;
        printf("Product sales for %d are %d",pr,ps);
        total += ps;
    printf("\nRetail Sales Calculator (-1 to close)");
    scanf("%d",&qp);
    }
    printf("Total Sales made are %d",total);
    return 0;
}