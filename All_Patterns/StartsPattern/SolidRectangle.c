/**
 * @file SolidRectangle.c
 * @author Abdelrahman Aref
 * @brief  Code to Draw solid rectangle Pattern
 * @version 0.1
 * @date 2023-07-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

int main()
{
    int row = 0 , coloumn = 0 ;
    int rowCounter = 0 , coloumnCounter = 0 ;
    do
    {
        printf("Enter a valid number of rows : ");
        fflush(stdin);  fflush(stdout);
        scanf("%d", &row);

        printf("Enter a valid number of coloumn : ");
        fflush(stdin);  fflush(stdout);
        scanf("%d", &coloumn);
        
    } while ((row < 0) || (coloumn < 0) );

    for (rowCounter = 0 ; rowCounter < row ; rowCounter++)
    {
        for (coloumnCounter = 0 ; coloumnCounter < coloumn ; coloumnCounter++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    
    return 0 ;
}