/**
 * @file FullPyramid.c
 * @author Abdelrahman Aref
 * @brief  Code to Draw full pyramid Pattern
 * @version 0.1
 * @date 2023-07-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

int main()
{
    int oddCounter = 1 ;
    int row = 0 ;
    int rowCounter = 0 , starCounter = 0 , spaceCounter = 0;
    do
    {
        printf("Enter a valid number of rows : ");
        fflush(stdin);  fflush(stdout);
        scanf("%d", &row);
        
    } while ((row < 0));

    for (rowCounter = 1 ; rowCounter <= row ; rowCounter++)
    {
        for(spaceCounter = ((row - rowCounter))  ; spaceCounter > 0 ; spaceCounter--)
        {
            printf("  ");
        }

        if(1 == rowCounter)
        {
            printf("%d ",rowCounter);
            printf("\n");
            continue;
        }


        for (starCounter = rowCounter ; starCounter <= (rowCounter + oddCounter)  ; starCounter++)
        {
            printf("%d ",(starCounter));
        }

        for (starCounter -= 2 ; starCounter >= rowCounter ; starCounter--)
        {
            printf("%d ",(starCounter));
        }
        

        oddCounter ++;

        printf("\n");
    }
        
    return 0 ;
}