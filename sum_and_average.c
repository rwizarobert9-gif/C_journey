#include <stdio.h>

int main(){
    char mark[]="*";
    int i;
    int j ,r;
    for (i=0;i<=10;i++) {
        for (r=0;r<(i+1);r++){
            printf(" ");

        }
         
        for (j=9;j>(i+1);j--){
            
            printf("%s",mark);
            
        }
       
        printf("\n");
    }
return 0;
}
