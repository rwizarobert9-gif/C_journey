#include <stdio.h>
#include <windows.h>
int main () {
    SetConsoleOutputCP(CP_UTF8);
    printf("N\tN\u00b2\tN\u00b3\tN\u00b4");
    for (int i = 1; i <= 10; i++) {
        printf("\n%d\t%d\t%d\t%d", i, i*i, i*i*i, i*i*i*i);

    }
    return 0;
}