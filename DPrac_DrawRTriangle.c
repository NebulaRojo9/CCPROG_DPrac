/*
    August 20, 2024 - Tuesday (<12:23 pm)
    > Write a program that will display a pattern depending on the value of n entered by the user
        ex. if n = 3, display
            *
            * *
            *   *
    
        ex. if n= 4, display
            *
            * *
            *   *
            * * * * 
    SOURCE: CCPROG1 Course (6.0 Chapter Exercises Iterative Statements in C) #34
    Owner: Rojo, Von
*/

#include <stdio.h>


/* drawRTriangle() displays asterisks that depicts right triangle with its
    user-defined size.
    @param nSize: size of triangle to be displayed. Defined as number of rows */
void drawRTriangle(int nSize) {
    int i, j;

    for (i = 1; i <= nSize; i++)    { 
        for (j = 1; j <= i; j++)
            if (j == 1 || j == i)
                printf("* ");
            else
                printf("  ");
        printf("\n");
    }
}


int main() {
    int nSize;

    printf("Input size: ");
    scanf("%d", &nSize);
    drawRTriangle(nSize);
    
    return 0;
}