#include <stdio.h>

int main () {
    int sales; //sales made in the month.
    int i; //the passcode (either 0-open 1-close)
    double total_taxes = 0; //total taxes made in the months inputted.
    printf("Month sales calculation:");
    printf("\nEnter passcode (0-open 1-close):");
    scanf("%d", &i);
    while (i == 0) {
        char month[20];
        printf("\nName of the month:");
        scanf("%19s",month);
        printf("\nEnter sales made:UGX" );
        scanf("%d", &sales);
        double Csales_tax = 0.05*sales;
        double Ssales_tax = 0.04*sales;
        double Total_tax = Csales_tax + Ssales_tax;
       printf("\nCounty tax:UGX %.3lf", Csales_tax);
        printf("\nState tax:UGX %.3lf", Ssales_tax);
        printf("\nTotal monthly taxes:UGX %.3lf", Total_tax);
        total_taxes += Total_tax;
        printf("\nEnter passcode (0-open 1-close):");
        scanf("%d", &i);
    }
    if (i == 1) {
        printf("\nTotal taxes made in the months inputted:UGX %.3lf", total_taxes);
        printf("\nThank you for using the sales tax calculator.");
    }
    else {
        printf("\nInvalid passcode entered.");
    }
    return 0;
}