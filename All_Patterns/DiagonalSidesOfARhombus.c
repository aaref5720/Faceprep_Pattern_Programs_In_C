/**
 * @file DiagonalSidesOfARhombus.c
 * @author Abdelrahman Aref
 * @brief  Code to Draw Diagonal Sides Of A Rhombus / Diamond
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
        printf("Enter a valid odd number of rows : ");
        fflush(stdin);  fflush(stdout);
        scanf("%d", &row);
        
    } while ((row < 0) || ((row % 2) == 0));

    int cause = (row / 2) * 3 ;

    for (rowCounter = 0 ; rowCounter < row ; rowCounter++)
    {
        for (starCounter = 0 ; starCounter < row ; starCounter++)
        {
            if (rowCounter == (row / 2) || starCounter == (row / 2) || (starCounter + rowCounter) ==  (row / 2) ||
               (rowCounter - starCounter) ==  (row / 2) || (starCounter - rowCounter) ==  (row / 2) || 
               (starCounter + rowCounter) ==  (cause))
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