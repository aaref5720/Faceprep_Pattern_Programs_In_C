/**
 * @file DiagonalSidesOfARectangle.c
 * @author Abdelrahman Aref
 * @brief  Code to Draw Diagonal Sides Of A Rectangle Pattern
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
    int rowCounter = 0 , starCounter = 0;
    do
    {
        printf("Enter a valid number of rows : ");
        fflush(stdin);  fflush(stdout);
        scanf("%d", &row);
        
    } while ((row < 0));

    for (rowCounter = 0 ; rowCounter < row ; rowCounter++)
    {
        for (starCounter = 0 ; starCounter < row ; starCounter++)
        {
            if (starCounter == 0 || rowCounter == 0 || starCounter == rowCounter || rowCounter == (row - 1) ||
                starCounter == (row - 1) || ((starCounter + rowCounter) == (row - 1)))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
                
        }
        printf("\n");
    }
    
    return 0 ;
}