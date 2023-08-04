/**
 * @file FloydTriangle.c
 * @author Abdelrahman Aref
 * @brief  Code to Draw Floyd Triangle
 * @version 0.1
 * @date 2023-07-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

int main()
{
    int oddCounter = 0 ;
    int row = 0 ;
    int rowCounter = 0 , starCounter = 0;
    do
    {
        printf("Enter a valid number of rows : ");
        fflush(stdin);  fflush(stdout);
        scanf("%d", &row);
        
    } while ((row < 0));

    for (rowCounter = 0 ; rowCounter <= row ; rowCounter++)
    {

        for (starCounter = 0; starCounter <= (rowCounter) ; starCounter++)
        {
            printf("%4d ",(oddCounter + 1));
            oddCounter++;
        }

        printf("\n");
    }
    
    
    return 0 ;
}