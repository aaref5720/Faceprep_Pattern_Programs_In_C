/**
 * @file InvertedFullPyramid.c
 * @author Abdelrahman Aref
 * @brief  Code to Draw inverted full pyramid Pattern
 * @version 0.1
 * @date 2023-07-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

int main()
{
    int row = 0 ;
    int rowCounter = 0 , starCounter = 0 , spaceCounter = 0;
    do
    {
        printf("Enter a valid number of rows : ");
        fflush(stdin);  fflush(stdout);
        scanf("%d", &row);
        
    } while ((row < 0));

    for (rowCounter = row ; rowCounter > 0 ; rowCounter--)
    {
        for(spaceCounter = 0  ; spaceCounter < (row - rowCounter) ; spaceCounter++)
        {
            printf(" ");
        }
        for (starCounter = rowCounter ; starCounter > 0 ; starCounter--)
        {
            printf("* ");
        }

        printf("\n");
    }
    
    
    return 0 ;
}