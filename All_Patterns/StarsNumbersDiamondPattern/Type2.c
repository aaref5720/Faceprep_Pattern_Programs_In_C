/**
 * @file Type2.c
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
        printf("Enter a valid maximum number of rows : ");
        fflush(stdin);  fflush(stdout);
        scanf("%d", &row);
        
    } while ((row < 0));

    for (rowCounter = 1 ; rowCounter <= row ; rowCounter++)
    {
        for (starCounter = 1 ; starCounter <= rowCounter ; starCounter++)
        {
            if(starCounter == rowCounter)
            {
                printf("%d",rowCounter);
                break;
            }

            printf("%d*",rowCounter);
        }

        printf("\n");
    }
    
 

    for (rowCounter -= 1 ; rowCounter >= 1 ; rowCounter--)
    {
        for (starCounter = 0 ; starCounter < rowCounter ; starCounter++)
        {
            if(starCounter == (rowCounter - 1))
            {
                printf("%d",rowCounter);
                break;
            }

            printf("%d*",rowCounter);
        }

        printf("\n");
    }
    
    return 0 ;
}