/**
 * @file HollowFullPyramid.c
 * @author Abdelrahman Aref
 * @brief  Code to Draw Hollow full pyramid Pattern
 * @version 0.1
 * @date 2023-07-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

int main()
{
    int row = 6 ;
    int rowCounter = 0 , starCounter = 0 , spaceCounter = 0;
    do
    {
        printf("Enter a valid number of rows : ");
        fflush(stdin);  fflush(stdout);
        scanf("%d", &row);
        
    } while ((row < 0));

    for (rowCounter = 1 ; rowCounter <= row ; rowCounter++)
    {
        
        for(spaceCounter = (row - rowCounter + 1)  ; spaceCounter > 0 ; spaceCounter--)
        {
            printf(" ");
        }

        printf("1 ");

        for (starCounter = 1 ; starCounter <= (rowCounter) ; starCounter++)
        {
            if((rowCounter == row ))
            {
                if((starCounter == rowCounter))
                {
                    break;
                }
                printf("%d ",(starCounter + 1));
            }
            else
            {
                if((starCounter + 1) == rowCounter)
                {
                    printf("%d",(rowCounter));
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