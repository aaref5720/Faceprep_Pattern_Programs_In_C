/**
 * @file Type1.c
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
        printf("Enter a valid start number of rows : ");
        fflush(stdin);  fflush(stdout);
        scanf("%d", &row);
        
    } while ((row < 0));

    for (rowCounter = row ; rowCounter <= (row * 2) ; rowCounter++)
    {
        for (starCounter = rowCounter ; starCounter <= (rowCounter + (rowCounter - row)) ; starCounter++)
        {
            printf("%d",rowCounter);
        }

        printf("\n");
    }
    
 

    for (rowCounter -= 2 ; rowCounter >= row ; rowCounter--)
    {
        for (starCounter = rowCounter ; starCounter <= (rowCounter + (rowCounter - row)) ; starCounter++)
        {
            printf("%d",rowCounter);
        }

        printf("\n");
    }
    
    return 0 ;
}