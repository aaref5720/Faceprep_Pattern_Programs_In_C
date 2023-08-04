/**
 * @file InscribedInRectangle.c
 * @author Abdelrahman Aref
 * @brief  Code to Draw Inscribed In Rectangle
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
    int rowCounter = 0 , starCounter = 0, SpaceCounter = -1  , ScaceIndex = 0;
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
            printf("*");
        }

        SpaceCounter++;

        for (ScaceIndex = 0 ; ScaceIndex <= SpaceCounter ; ScaceIndex++)
        {
            printf("  ");
        }

        for (starCounter = 0 ; starCounter < rowCounter ; starCounter++)
        {
            printf("*");
        }
        printf("\n");
    }


    for (rowCounter = 0 ; rowCounter < row ; rowCounter++)
    {
        for (starCounter = 0 ; starCounter <= rowCounter ; starCounter++)
        {
            printf("*");
        }

        for (ScaceIndex = 0 ; ScaceIndex <= (row - rowCounter - 1) ; ScaceIndex++)
        {
            printf("  ");
        }

        for (starCounter = 0 ; starCounter <= rowCounter ; starCounter++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    
    return 0 ;
}