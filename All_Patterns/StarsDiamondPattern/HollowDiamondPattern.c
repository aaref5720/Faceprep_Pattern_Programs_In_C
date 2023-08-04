/**
 * @file HollowDiamondPattern.c
 * @author Abdelrahman Aref
 * @brief  Code to Draw Hollow Diamond Pattern
 * @version 0.1
 * @date 2023-07-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

int main()
{
    int oddCounter = -2 ;
    int row = 0 ;
    int rowCounter = 0 , starCounter = 0 , spaceCounter = 0;
    do
    {
        printf("Enter a valid number of rows : ");
        fflush(stdin);  fflush(stdout);
        scanf("%d", &row);
        
    } while ((row < 0));

    if(row > 2)
    {
        oddCounter = (oddCounter + (row - 2 ));
    }

    for (rowCounter = 0 ; rowCounter < row ; rowCounter++)
    {
        

        for(spaceCounter = (row - rowCounter)  ; spaceCounter > 0 ; spaceCounter--)
        {
            printf(" ");
        }

        printf("* ");

        for (starCounter = 0 ; starCounter <= (rowCounter - 1) ; starCounter++)
        {
            if((starCounter + 1) == rowCounter)
            {
                printf("*");
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }

 

    for (rowCounter = 0 ; rowCounter < row ; rowCounter++)
    {
        

        for(spaceCounter = 0  ; spaceCounter <= rowCounter ; spaceCounter++)
        {
            printf(" ");
        }

        printf("* ");
        if (row == 1)
        {
            break;
        }
        

        for (starCounter = (row - rowCounter + oddCounter) ; starCounter >= rowCounter ; starCounter--)
        {
                if(starCounter  == (rowCounter))
                {
                    printf("*");
                    break;
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