/**
 * @file HollowRhombus.c
 * @author Abdelrahman Aref
 * @brief  Code to Draw Hollow Rhombus
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
    int rowCounter = 0 , starCounter;
    do
    {
        printf("Enter a valid number of rows : ");
        fflush(stdin);  fflush(stdout);
        scanf("%d", &row);
        
    } while ((row < 0));

    for (rowCounter = row ; rowCounter > 0 ; rowCounter--)
    {
        for (starCounter = 0 ; starCounter < rowCounter ; starCounter++)
        {
            printf(" ");
        }

        for(starCounter = 0 ; starCounter < row ; starCounter++)
        {
            if(starCounter == 0 || (starCounter == (row - 1)) || rowCounter == row || (rowCounter == 1))
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