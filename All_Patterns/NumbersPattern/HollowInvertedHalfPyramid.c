/**
 * @file HollowInvertedHalfPyramid.c
 * @author Abdelrahman Aref
 * @brief  Code to Draw hollow inverted half pyramid Pattern
 * @version 0.1
 * @date 2023-07-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

int main()
{
    int row = 5 ;
    int rowCounter = 0 , starCounter;
    do
    {
        printf("Enter a valid number of rows : ");
        fflush(stdin);  fflush(stdout);
        scanf("%d", &row);
        
    } while ((row < 0));

    for (rowCounter = row ; rowCounter > 0 ; rowCounter--)
    {
        printf("%d ",(row - rowCounter + 1));

        for (starCounter = 1 ; starCounter < rowCounter ; starCounter++)
        {
            if((rowCounter == row))
            {
                printf("%d ",(starCounter + 1));
            }
            else
            {
                if(starCounter == (rowCounter - 1))
                {
                    printf("5 ");
                }
                else
                {
                    printf("  ");
                }
            }
            
        }

        printf("\n");
    }
    
    
    return 0 ;
}