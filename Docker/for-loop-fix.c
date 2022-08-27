#include <stdio.h>

int main(void) {

    int i = 0;

    printf("+");
    for (i = 0; i < 23; i++)
        printf("-");
    printf("+\n");

    for (i = 0; i < 1; i++)
        printf("| o | X | o | X | o | X |\n| X | o | X | o | X | o |\n| o | X | o | X | o | X |\n| X | o | X | o | X | o |\n| o | X | o | X | o | X |\n| X | o | X | o | X | o |\n");

     /* 
     this is a test // this a comment
     */       
 //       printf("| X | o | X | o | X | o |\n");
 //       int k = 0;
 //       for (k = 0; k < 1; k++)
 //           printf("| X | o | X | o | X | o |\n");
 //           printf("| o | X | o | X | o | X |\n");
 //           printf("| X | o | X | o | X | o |\n");



    printf("+");
    for (i = 0; i < 23; i++)
        printf("-");
    printf("+");

    return(0);
}
