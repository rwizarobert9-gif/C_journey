#include <stdio.h>
#include <math.h>

int main () {

    double p = 100000;
    double r = 0.05;

    printf("%4s\t%19s\n","Year","Accumulated Amount");
for (unsigned int year = 1; year <= 10; ++year) {
double amount = p * pow(1.0 + r, year);

 printf("%4u\t%.2f\n", year, amount); 
} 
    return 0;

}