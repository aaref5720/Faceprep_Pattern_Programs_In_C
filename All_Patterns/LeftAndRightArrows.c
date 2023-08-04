/**
 * @file LeftAndRightArrows.c
 * @author Abdelrahman Aref
 * @brief  Code to Draw Left And Right Arrows
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

    printf("Right Arrow\n");

    for (rowCounter = 0 ; rowCounter < (row / 2) ; rowCounter++)
    {
        for (starCounter = 0 ; starCounter < row ; starCounter++)
        {
            if (starCounter == ((row / 2) + rowCounter))
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

    for (starCounter = 0 ; starCounter < row ; starCounter++)
    {
        printf("*");
    }
    printf("\n");

    for (rowCounter = 2 ; rowCounter <= ((row / 2)+1) ; rowCounter++)
    {
        for (starCounter = 0 ; starCounter < row ; starCounter++)
        {
            if (starCounter == (row - rowCounter))
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

    printf("Left Arrow\n");

    for (rowCounter = 0 ; rowCounter < ((row / 2)) ; rowCounter++)
    {
        for (starCounter = 0 ; starCounter < row ; starCounter++)
        {
            if (starCounter == ((row /2) - rowCounter))
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

    for (starCounter = 0 ; starCounter < row ; starCounter++)
    {
        printf("*");
    }
    printf("\n");


    for (rowCounter = 0 ; rowCounter < (row / 2) ; rowCounter++)
    {
        for (starCounter = 0 ; starCounter < row ; starCounter++)
        {
            if (starCounter == (rowCounter + 1))
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