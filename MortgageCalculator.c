#include <stdio.h>

int main () {
    int i; // control/sentinel figure
    printf("Mortgage Calculator (-1 to close)");
    scanf("%d",&i);
    while (i != -1) {
        int ac; //account number
        printf("\nAccount Number: ");
        scanf("%d", &ac);
        int ma; //mortgage amount
        printf("\nMortgage Amount:UGX ");
        scanf("%d", &ma);
        int mt; // mortgage term
        printf("\nMortgage Term: ");
        scanf("%d", &mt);
        double ir; //interest rate
        printf("\nInterest Rate (as decimal): ");
        scanf("%lf",&ir);
        double intr = (double) ma* (double) mt*ir;
        printf("\nInterest payable is:UGX %.3lf",intr);
        printf("\nMortgage Calculator (-1 to close)");
    scanf("%d",&i);

    }

    return 0;
}