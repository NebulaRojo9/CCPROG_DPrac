/*
    August 18, 2024 - Sunday 10:05 am
    > Write a program that will create a rectangle based on length and width.  
        Use 2 iterative/loop statements.
    > If length = 5 and width = 10 display
        **********
        *        *
        *        *
        *        *
        **********
    SOURCE: CCPROG1 Course (6.0 Chapter Exercises Iterative Statements in C) #32
    Owner: Rojo, Von
*/

#include <stdio.h>


/* drawRectangle() displays bunch of asterisks depicting a simple rectangle
    based solely on user's input on length and width.
    @param length: acting as outer loop
    @param width: acting as inner loop */
void drawRectangle(int length, int width) {
    int i, j;

    for (i = 1; i <= length; i++) {
        for (j = 1; j <= width; j++) {
            if (i == 1 || i == length)
                printf("*");
            else if (j == 1 || j == width)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}


int main() {
    int nLength;
    int nWidth;

    printf("Input length = ");
    scanf("%d", &nLength);
    printf("Input width = ");
    scanf("%d", &nWidth);
    drawRectangle(nLength, nWidth);

    return 0;
}