/**
 * @file PascalTriangle.c
 * @author Abdelrahman Aref
 * @brief  Code to Draw Pascal Triangle
 * @version 0.1
 * @date 2023-07-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

int main()
{
    int PrintedNumber = 1 ;
    int row = 0 ;
    int rowCounter = 0 , starCounter = 0;
    do
    {
        printf("Enter a valid number of rows : ");
        fflush(stdin);  fflush(stdout);
        scanf("%d", &row);
        
    } while ((row < 0));


    for (rowCounter = 0 ; rowCounter < row ; rowCounter++)
    {

        for (starCounter = 0; starCounter <= rowCounter ; starCounter++)
        {
            if((starCounter == 0) || (rowCounter == 0))
            {
                PrintedNumber = 1 ;
            }
            else
            {
                PrintedNumber = PrintedNumber * (rowCounter - starCounter + 1) / starCounter ;
            }
 
            printf("%4d ",PrintedNumber);
        }

        printf("\n");
    }
    
    
    return 0 ;
}