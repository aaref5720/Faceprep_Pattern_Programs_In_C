/**
 * @file Type4.c
 * @author Abdelrahman Aref
 * @brief  Pttern Shown @ readMe file
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

    printf("*\n");

    for(rowCounter = 0 ; rowCounter < row ; rowCounter++)
    {
        printf("* ");
        for(starCounter = 0 ; starCounter <= rowCounter ; starCounter++)
        {
            printf("%d ",(starCounter + 1));
        }

        for(starCounter -= 1 ; starCounter > 0 ; starCounter--)
        {
            printf("%d ",(starCounter));
        }
        printf("* ");
        printf("\n");
    }
    
    for(rowCounter -= 2 ; rowCounter >= 0   ; rowCounter--)
    {
        printf("* ");
        for(starCounter = 0 ; starCounter <= rowCounter ; starCounter++)
        {
            printf("%d ",(starCounter + 1));
        }

        for(starCounter -= 1 ; starCounter > 0 ; starCounter--)
        {
            printf("%d ",(starCounter));
        }
        printf("* ");
        printf("\n");
    }

    printf("* ");
    
    return 0 ;
}